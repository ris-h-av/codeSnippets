#include<iostream>
#include<climits>
using namespace std;

int secondLagest(int arr[],int n){
    if(n<2){
        return -1; // no second largest element
    }
    int max=INT_MIN;
    int secMax=max;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secMax=max;
            max=arr[i];
        }
        else if(arr[i]>secMax && arr[i]<max){
            secMax = arr[i];
        }
    }
    return (secMax==INT_MIN)? -1: secMax;
}

int main(){
    int arr[] = {1,1,1,1};
    int result=secondLagest(arr,1);
    cout<<result;
    return 0;
}