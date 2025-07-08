#include <iostream>
using namespace std;

void rotate(int arr[],int n){
    if(n<2){
        return;
    }
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1]=temp;
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {2,3,4,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotate(arr,n);
    print(arr,n);
    return 0;
}
