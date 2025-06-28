#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n){
    bool flag = true;
    for(int i=n-1;i>0;i--){
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag = false;
            }
        }
        if(flag == true){
            cout<<"Already sorted"<<endl;
            break;
        }
    }
}

void print(int a[],int n){
    for(int i=0;i<n;i++){
        std::cout << a[i] <<" ";
    }
}

int main() {
	// your code goes her
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"before bubble sort :";
    print(a,n);
    cout<<endl;
    bubble_sort(a,n);
    cout<<"after bubble sort : ";
    print(a,n);
}
