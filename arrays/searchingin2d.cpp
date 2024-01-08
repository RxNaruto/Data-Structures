#include<iostream>
using namespace std;
void searchingin2d(int arr[][2],int n){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]==n){
                cout<<"The number is present in "<<i+1<<" row "<<j+1<<" coulumn"<<endl;
                break;
            }
            
        }
    }
}
int main()
{
    int arrA[2][2]={{1,2},{3,5}};
    searchingin2d(arrA,3);
    
 return 0;
}