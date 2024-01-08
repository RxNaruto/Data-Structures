#include<iostream>
using namespace std;

void arraySortingWA(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] == 0 && j > 0) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            } else if (arr[j] == 2 && j < size - 1) {
                int temp2 = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp2;
            }
        }
    }
}

void printing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {0, 1, 2, 0, 1, 2};

    cout << "Array before sorting" << endl;
    printing(arr, 6);

    cout << "Array after sorting" << endl;
    arraySortingWA(arr, 6);
    printing(arr, 6);

    return 0;
}
