#include<bits/stdc++.h>
using namespace std;

void average(int arr[],int n){
    double sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    double avg = sum / n;
    cout<<"Avg. -> "<<avg;
}

int main(){
    int arr[] = {1,2,1,1,5,1};
    average(arr,6);
}