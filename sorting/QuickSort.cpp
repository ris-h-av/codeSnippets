#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int low, int high)
{
    // Your code here
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);

        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    // code here
    if (low < high) {
        int part = partition(arr, low, high);
        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }
}



int main() {
    // your code goes here
    int arr[] = {
        4,
        231,
        4,
        15,
        2,
        14,
        1,
        31,
        123
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}