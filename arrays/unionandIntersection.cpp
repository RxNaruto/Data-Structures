//incomplete code

#include<iostream>
using namespace std;
void printing(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void unionArray(int arr1[],int arr2[],int size1,int size2){
    int unionArr[]={};
    int count=size1;
    for(int i=0;i<size1;i++){
        unionArr[i]=arr1[i];
    }

    for(int i=0;i<size2;i++){
        for(int j=0;j<size2;j++){
            if(arr2[i]==unionArr[j]){
                break;
            }
            else{
                unionArr[count]=arr2[i];
                count++;
            }
        }
    }
    printing(unionArr,10);


}

int main()
{
    int arr1[6]={7,1,5,2,3,6};
    int arr2[5]={3,8,6,20,7};
    unionArray(arr1,arr2,6,5);
 return 0;
}