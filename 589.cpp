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

vector<int> res;

void helper(Node *root){
    res.push_back(root->val);
    
    if (root->children.size()==0){
        return;
    }
    
    for (auto i:root->children){
        helper(i);
    }

}

vector<int> preorder(Node* root) {
    if (!root) return {};
    helper(root);
    return res;
}

int main(){
    
}