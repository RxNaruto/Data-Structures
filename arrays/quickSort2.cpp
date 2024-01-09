#include<iostream>
using namespace std;

void swap(int arr[] , int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}
int partition(int a[], int low, int high)
{
    int pivot_item = a[low];
    
    int left = low;
    int right = high;

    while (left < right)
    {
        /*Move left while item < pivot*/
        while(a[left] <= pivot_item) left++;
        /*Move right while item > pivot*/
        while(a[right] > pivot_item) right--;

        if(left < right){
            swap(a,left, right);
        }
    }
    /*right is final positin for the pivot*/
    a[low] = a[right];
    a[right] = pivot_item;
    return right;
}

void QuickSort(int a[], int low, int high)
{

    if(high > low){
        int pivot = partition(a, low, high);
        QuickSort(a, low, pivot-1);
        QuickSort(a, pivot+1, high);
    }

}

int main()
{
    int arr[] = {4,6,2,5,7,9,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}