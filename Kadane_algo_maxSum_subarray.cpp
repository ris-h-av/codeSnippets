#include <bits/stdc++.h>
using namespace std;


int maxSumSubarrays(const std::vector<int>& arr) {
    int n = arr.size();
    int maxi = INT_MIN;
    int sum = 0;
    int arrStart,arrEnd = -1;
    for (int i = 0; i < n; ++i) {
        int start;
        if(sum==0){
            start = i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi = sum;
            arrStart = start;
            arrEnd = i;
        }
        if(sum<0){
            sum=0;
        }
        
    }
    for(int i=arrStart;i<=arrEnd;++i){  
        cout<<arr[i]<<" ";  // to print the answer subarray
    }
    return maxi;
}

int main() {
    std::vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int ans  =  maxSumSubarrays(arr);
    cout<<ans;
    return 0;
}
