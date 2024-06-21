#include <bits/stdc++.h>
using namespace std;

// Given an array containing N integers and an integer K., Your task is to 
// find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

int longSubArr(vector<int> a,long long k){
    int left=0,right=0;
    long long sum = a[0];
    int n =a.size();
    int maxLen = 0;
    while(right<n){
        while(left<=right && sum>k){
            sum -= a[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum += a[right];
        }
        
    }
    return maxLen;
}

// this is the optimal solution when the array contains +v or 0's or -ve numbers 

int main() {
	// your code goes here
	vector<int> a{1,2,3,1,1,1,1,4,2,3};
	long long k =3; // sum
    int longestSubarray = longSubArr(a,k);
    std::cout << longestSubarray << std::endl;
}
