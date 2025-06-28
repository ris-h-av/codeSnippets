#include<iostream>
#include<vector>
#include<map>
using namespace std;

// Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. 
// Find the union of two sorted arrays.

// Method 1: use map
// Method 2: use set
// Method 3: two pointer approach


vector<int> FindUnion(vector<int> a1,vector<int> a2){
    map<int,int> freq;
    vector<int> result;
    for(auto i:a1){
        freq[i]++;
    }
    for(auto i:a2){
        freq[i];
    }
    for( auto& v: freq){
        result.push_back(v.first);
    }
    return result;
}

int main(){
    vector<int> a1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> a2 = {2,3,4,4,5,11,12};
    // 1,2,3,4,5,6,7,8,9,10,11,12 -> o/p
    vector<int> answer = FindUnion(a1,a2);
    
    for(auto i:answer){
        cout<<i<<" ";
    }
}
