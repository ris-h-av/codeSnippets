/*
    Heap is a complete binary tree(CBT) that comes with a heap order property
    CBT : every level is completely filled except the last level
          node are always filled/inserted from the left

    Heap order property -> tells that heap follows two property which classifies heap into two types: Max Heap & Min Heap

    Max Heap -> each node has a value greater than its children nodes
    Min Heap -> each node has a value lower than its children nodes
*/ 

#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
        int arr[100];
        int size;

        heap(){
            arr[0]=-1;
            size=0;
        }

        void insert(int val){
            size += 1;
            int index=size;
            arr[index] = val;

            while(index>1){
                int parent = index/2;
                if(arr[parent]<arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }else{
                    return;
                }
            }
        }

        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    return 0;
}