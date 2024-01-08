#include<iostream>
using namespace std;
int peakElement(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[5]={12,25,44,33,7};
    cout<<"The peak elements is "<<peakElement(arr,5);
 return 0;
}