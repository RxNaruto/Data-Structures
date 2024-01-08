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
int kthSmallestElement(int arr[],int key){
    return arr[key-1];

        
    }
int kthLargestElement(int arr[],int key,int size){
    return arr[size-key];

}

int main()
{
    int arr[5]={3,14,6,0,1};
    bubbleSort(arr,5);
    cout<<"The kth smallest element is "<<kthSmallestElement(arr,2);
    cout<<"The kth largest element is "<<kthLargestElement(arr,1,5);

 return 0;
}