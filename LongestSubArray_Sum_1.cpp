#include <bits/stdc++.h>
using namespace std;

// Given an array containing N integers and an integer K., Your task is to 
// find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

int longSubArr(vector<int> a,long long k){
    map<long long, int> preSum;
    long long sum = 0;
    int maxLen =0;
    for(int i=0;i<a.size();i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        long long remaining = sum - k;
        if(preSum.find(remaining) != preSum.end()){
            int len = i - preSum[remaining];
            maxLen = max(maxLen, len);
        }
        if(preSum.find(sum) == preSum.end()){
            preSum[sum] = i;    
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
