#include<bits/stdc++.h>
using namespace std;

double median(int arr[],int size){
    double ans;
    sort(arr,arr+size);
    if(size % 2 !=0){
        ans=arr[size/2];
    }
    else{
        double m1 = arr[size/2 - 1];
        double m2 = arr[(size/2)];
        ans = (m1+m2)/2;
    }
    return ans;
}

int main(){
    int n=5;
    int arr[] = {2,5,2,2,2,1,7};
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    cout<<m[2];
}