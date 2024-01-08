#include<iostream>
using namespace std;
int largestElement(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int smallestElement(int arr[],int n){
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
        smallest=arr[i];
    }
    }
    return smallest;
    
}
int main()
{
    int arr[5]={1,2,30,4,5};
    cout<<"The largest element is "<<largestElement(arr,5)<<endl;
    cout<<"The smallest element is "<<smallestElement(arr,5)<<endl;

 return 0;
}