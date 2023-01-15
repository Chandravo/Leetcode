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

class WordDictionary {
    TrieNode *root;
public:
    WordDictionary() {
        root=new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode *start=root;
        for (int i=0;i<word.size();i++){
            if (start->child[word[i]-'a']==nullptr){
                start->child[word[i]-'a']=new TrieNode();
                
            }
            start=start->child[word[i]-'a'];
        }
        start->isEnd=true;
    }
    

    bool search_helper(TrieNode *start,int i,string &w){
        if (start==nullptr) return false;
        if (i==w.size()) return start->isEnd;
        if (w[i]!='.') return search_helper(start->child[w[i]-'a'],i+1,w);    
        for (int j=0;j<26;j++){
            if (search_helper(start->child[j],i+1,w)) return true;
        }
        return false;
    }

    bool search(string word) {
        auto start=root;
        return search_helper(start,0,word);
    }
};

int main(){
    
}