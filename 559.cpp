//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

int res=0;

void helper(Node *root,int &curr){
    if (root->children.size()==0){
        curr++;
        res=max(res,curr);
        curr--;
        return;
    }
    curr++;
    for (auto i:root->children){
        helper(i,curr);
    }
    curr--;
}

int maxDepth(Node* root) {
    if (!root) return 0;
    int curr=0;
    helper(root,curr);
    return res;
}

int main(){
    
}