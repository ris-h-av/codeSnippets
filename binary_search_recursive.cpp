#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid = low+(high-low)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        return binarySearch(arr,mid+1,high,target);
    }
    else{
        return binarySearch(arr,low,mid-1,target);
    }
}

int main() {
	// your code goes here
	int arr[]= {11,22,33,44,55,66,77,88,99};
	int n = sizeof(arr)/sizeof(arr[0]);
    int index = binarySearch(arr,0,8,99);
    if(index==-1){
        std::cout << "Element not found" << std::endl;
    }
    else{
        cout<<"Element found at index : "<<index<<endl;
    }
}
