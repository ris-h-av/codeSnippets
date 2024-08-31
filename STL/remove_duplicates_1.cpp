#include<bits/stdc++.h>
using namespace std;

// use set that stores only unique elements

void remove(int arr[],int n){
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int k = s.size();
    int i=0;
    for(auto x:s){
        arr[i] = x;
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// two pointer approach 

int removeDuplicate(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return i+1;
}

int main(){
    int arr[] = {1,1,1,2,2,3,3,3,3,4,4};
    // remove(arr,11);
    int n = removeDuplicate(arr,11); // size of the unique elements
    cout<<n;
    return 0;
}