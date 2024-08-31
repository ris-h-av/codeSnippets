#include<bits/stdc++.h>
using namespace std;

// using a map to count the frequency of each array element
void freq(int arr[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]] += 1;
    }
    // traverse through the map and get the frequencies
    for(auto i:m){
        cout<<i.first<< " : "<<i.second<<endl;
    }
}
int main(){
    int arr[] = {2,2,3,4,4,2};
    int n = 6;
    freq(arr,n);
    return 0;
}