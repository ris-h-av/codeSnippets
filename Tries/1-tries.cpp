#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* childred[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            childred[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    void insertUtil(TrieNode* root, string word){
        // base case
        if(word.length() == 0){
            root->isTerminal=true;
        }

        // assumption = all letters are in CAPS
        int index = word[0] - 'A';
        TrieNode* child;

        // present
        if(root->childred[index] != NULL){
            child = root->childred[index];
        }else{
            // absent
            child = new TrieNode(word[0]);
            root->childred[index] = child;
        }

        // recursion
        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }
};

int main(){
    return 0;
}