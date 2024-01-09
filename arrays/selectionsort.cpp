#include<iostream>
using namespace std;
void selectionSort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void printing(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={91,21,4,8,2,1};
    printing(arr,6);
    selectionSort(arr,6);
    cout<<endl;
    printing(arr,6);
    
 return 0;
}