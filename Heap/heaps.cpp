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

        void deleteFromHeap(){  // whenever we talk about deletion then we deleting the route node
            if(size==0){
                return;
            }
            // step 1: put last element into first element
            arr[1] = arr[size];
            // step 2: remove last element from the heap
            size--;
            // take root node to its correct place
            int i=1;
            while (i<size)
            {
                int leftChild = 2*i;
                int rightChild = 2*i+1;

                if(leftChild<size && arr[i]<arr[leftChild]){
                    swap(arr[i],arr[leftChild]);
                }else if(rightChild<size && arr[i]<arr[rightChild]){
                    swap(arr[i],arr[rightChild]);
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

void heapify(int arr[],int n, int i){
    int largest= i;
    int left = 2*i;
    int right = 2*i+1;
    
    if(left < n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right < n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    // cout<<"Heap before deletion : ";
    // h.print();
    // cout<<endl;
    // cout<<"Heap after deletion : ";
    // h.deleteFromHeap();
    // h.print();

    int arr[]= {-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"printing the after heapify : ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}