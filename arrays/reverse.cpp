#include<iostream>
using namespace std;
void reverse(int *arr,int n){
    if(n%2!=0){
        for(int i=0;i<(n-1)/2;i++){
            int temp=arr[i];
            arr[i]=arr[n-(i+1)];
            arr[n-(i+1)]=temp;

        }
    }
    else{
        for(int i=0;i<n/2;i++){
            int temp=arr[i];
            arr[i]=arr[n-(i+1)];
            arr[n-(i+1)]=temp;

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
    int arr[6]={1,2,3,4,5,6};
    printing(arr,6);
    cout<<endl;
    reverse(arr,6);
    cout<<"after reversing"<<endl;
    printing(arr,6);


 return 0;
}