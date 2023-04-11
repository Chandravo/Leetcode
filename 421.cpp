//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class TrieNode{
public:
    TrieNode *child[2];
    TrieNode(){
        for (int i=0;i<2;i++){
            child[i]=nullptr;
        }
    }
};

TrieNode *root = new TrieNode();

void addnumber(int n){
    bitset<32> bs(n);
    TrieNode *ptr=root;
    for (int i=31;i>=0;i--){
        if (!ptr->child[bs[i]]) ptr->child[bs[i]]=new TrieNode();
        ptr=ptr->child[bs[i]];
    }
}

int helper(int n){
    TrieNode *ptr=root;
    bitset<32> bs(n);
    int res=0;
    for (int i=31;i>=0;i--){
        if (ptr->child[!bs[i]]){
            res+=(1<<i);
            ptr=ptr->child[!bs[i]];
        }
        else ptr=ptr->child[bs[i]];
    }
    return res;
}

int findMaximumXOR(vector<int>& nums) {
    TrieNode *dummy = new TrieNode ();
    for (int i:nums){
        addnumber(i);
    }
    int res=0;
    for (int i:nums) res=max(res,helper(i));
    return res;

}

int main(){
    
}