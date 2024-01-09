#include<iostream>
using namespace std;
void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int partition(int arr[],int s,int e ){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
        count++;
        }
    }
    int pivotindex=s+count;
    swap(arr,arr[pivotindex],pivot);


}
void quickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr, s ,e);
    
    quickSort(arr,s,p-1);
    quickSort(arr,s,p+1);
}
int main()
{
 return 0;
}