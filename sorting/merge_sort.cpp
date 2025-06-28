#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& a,int l,int h,int m){
    vector<int> temp;
    int i=l;
    int j=m+1;
    while(i<=m && j<=h){
        if(a[i]<=a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i<=m){
        temp.push_back(a[i]);
        i++;
    }
    while(j<=h){
        temp.push_back(a[j]);
        j++;
    }
    for(int i=l;i<=h;i++){
        a[i] = temp[i-l];
    }
}

void mergeSort(vector<int>& a,int l,int h){
    if(l == h){
        return;
    }
    int mid = (l+h)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,h);
    merge(a,l,h,mid);
}



int main() {
	// your code goes here
	vector<int> a{99,100,98,101,97,102};
	int l=0;
	int h=a.size()-1;
	mergeSort(a,l,h);
	for(int i=0;i<a.size();i++){
	    std::cout << a[i] <<" ";
	}
}
