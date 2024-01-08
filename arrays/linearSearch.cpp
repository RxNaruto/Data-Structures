#include<iostream>
using namespace std;
int searching(int arr[],int n,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    cout<<searching(arr,4,7);
 return 0;
}