#include<iostream>
using namespace std;
void bubbleSort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=temp;
                arr[j]=arr[j+1];
                arr[j+1]=temp;
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
    int arr[5]={3,14,6,0,1};
    printing(arr,5);
    cout<<"Array after sorting "<<endl;
    bubbleSort(arr,5);
    printing(arr,5);
    
 return 0;
}