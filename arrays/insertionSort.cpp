#include<iostream>
using namespace std;
void insertionSort(int *arr,int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
           

        }
        arr[j+1]=temp;
    }
}
void printing(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={5,1,6,2,4,3};
    printing(arr,6);
    cout<<endl;
    insertionSort(arr,6);
    printing(arr,6);
 return 0;
}
