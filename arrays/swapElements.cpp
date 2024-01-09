#include<iostream>
using namespace std;
void swapElement(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void printing(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    printing(arr,6);
    swapElement(arr,1,5);
    printing(arr,6);

    
 return 0;
}