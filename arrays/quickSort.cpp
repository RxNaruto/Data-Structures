#include<iostream>
using namespace std;
void swapElement(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swapElement(arr,pivotIndex,s);
    int i=s,j=e;

    while(i<pivotIndex && j> pivotIndex){
        while(arr[i]< pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j> pivotIndex){
            swapElement(arr,i++ , j--);
        }
    }

}
void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
void printing(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    quickSort(arr,0,6);
    printing(arr,6);
 return 0;
}