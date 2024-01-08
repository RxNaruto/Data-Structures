#include<iostream>
using namespace std;
void arrayprinting(int arr[][2],int size){
    //in c++ the size of second array must be provided.
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
}
int main()
{
    int arr1[2][2]={{1,2},{2,3}};
    int arr2[2][2]={{1,3},{5,3}};
    int newarr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            newarr[i][j]=arr1[i][j]+arr2[i][j];

        }
    }
    arrayprinting(newarr,2);
    

 return 0;
}