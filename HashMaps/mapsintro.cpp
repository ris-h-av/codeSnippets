#include<iostream>
#include<map>
#include <unordered_map>
using namespace std;

int main(){
    // creation
    unordered_map<string,int> m;

    //insertion
        // method 1
    pair<string,int> pair1 = make_pair("Rishav",1);
    m.insert(pair1);
        // method 2
    pair<string,int> pair2("Aman",2);
    m.insert(pair2);
        // method 3
    m["Riya"] = 3;

    // Searching
    // cout<<m["Riya"]<<endl;
    // cout<<m.at("Riya")<<endl;
    // cout<<m.at("Rishav")<<endl;

    // cout<<m.at("unkown")<<endl;
    // cout<<m["unkown"]<<endl;

    // size
    // cout<<m.size()<<endl;

    // to check presence
    // cout<<m.count("Riya")<<endl;  // gives 0 if not present & gives 1 if present in the map

    // erase
    // m.erase("Aman");
    // cout<<"Size of map after erasing :"<<m.size()<<endl;

    // iterator
    // unordered_map<string,int> :: iterator it = m.begin(); // it becomes th iterator pointing to the first memeber of the map
    // while(it!=m.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    //     it++;
    // }


    map<int,int> mp;
    int arr[] = {1,2,3,4,3,2,1};
    int n=7;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}