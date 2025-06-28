#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j]<a[j-1]){
            swap(a[j-1],a[j]);
            j--;
        }
    }
}

void print(int a[],int n){
    for(int i=0;i<n;i++){
        std::cout << a[i] << " ";
    }
}

int main() {
	// your code goes here
	int a[]= {12,5344,86,76,21,112,231};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"Before sorting :";
	print(a,n);
	cout<<endl;
	insertion_sort(a,n);
	cout<<"after sorting : ";
	print(a,n);
	

}
