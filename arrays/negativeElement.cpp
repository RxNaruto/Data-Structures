#include<iostream>
using namespace std;
void shiftingArray(int arr[],int k){
    
        for(int j=k;j>0;j--){
            arr[j]=arr[j-1];
        }

    
}
void negativeOneSide(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[j]<0){
                int temp=arr[j];
                shiftingArray(arr,j);
                arr[count]=temp;
                

            }
        }
    }
}

void printing(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={0,-1,5,-6,3};
    printing(arr,5);
    negativeOneSide(arr,5);
    printing(arr,5);



 return 0;
}