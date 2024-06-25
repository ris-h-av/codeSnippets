#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1; // when arr[mid]>target
        }
    }
    return -1;
}

int main() {
	// your code goes here
	int arr[]= {11,22,33,44,55,66,77,88,99};
	int n = sizeof(arr)/sizeof(arr[0]);
    int index = binarySearch(arr,n,99);
    if(index==-1){
        std::cout << "Element not found" << std::endl;
    }
    else{
        cout<<"Element found at index : "<<index<<endl;
    }
}
