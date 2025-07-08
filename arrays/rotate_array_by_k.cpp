#include<bits/stdc++.h>
using namespace std;

void rotateByOne(int arr[],int n){
    if(n<2){
        return;
    }
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1]=temp;
}

void rotateLeft(int arr[], int n, int k) {
    k = k % n; // in case k > n
    for(int r = 0; r < k; r++) {
        int temp = arr[0];
        for(int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
}

void reverse(int arr[], int start, int end){
    while(start < end){
        swap(arr[start++], arr[end--]);
    }
}

void rotateLeftEfficient(int arr[], int n, int k){
    k %= n;
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;
    rotateLeftEfficient(arr,n,k);
    print(arr,n);
    return 0;
}