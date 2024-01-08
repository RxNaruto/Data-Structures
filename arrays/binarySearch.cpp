#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int s=0,e=size-1;
    while(s<=e){
        int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    }
    return -1;
    
}
int main()
{
    int arr[10]={91,21,30,74,577,46,76,18,94,10};
    cout<<"The key is 21 and is at the place"<<binarySearch(arr,10,21)<<endl;
    cout<<"The key is 74 and is at the place"<<binarySearch(arr,10,74)<<endl;
 return 0;
}