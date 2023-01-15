//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class TrieNode{
public:
    TrieNode *child[26];
    bool isEnd;
    TrieNode(){
        for (int i=0;i<26;i++){
            child[i]=nullptr;
        }
        isEnd=false;
    }
};

class Trie {
    TrieNode *root;
public: 
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *start=root;
        for (int i=0;i<word.size();i++){
            if (start->child[word[i]-'a']==nullptr){
                start->child[word[i]-'a']=new TrieNode();
                
            }
            start=start->child[word[i]-'a'];
        }
        start->isEnd=true;
    }
    
    bool search(string word) {
        TrieNode *start=root;
        for (int i=0;i<word.size();i++){
            if (start->child[word[i]-'a']==nullptr) return false;
            start=start->child[word[i]-'a'];
        }
        return start->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode *start=root;
        for (int i=0;i<prefix.size();i++){
            if (start->child[prefix[i]-'a']==nullptr) return false;
            start=start->child[prefix[i]-'a'];
        }
        return true;
    }
};

int main(){
    
}