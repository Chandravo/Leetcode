//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    haha(root,res);    
    return res;    
}

void haha(TreeNode *root, vector<int> &res){
    if (root==nullptr){
        return ;
    }
    res.push_back(root->val);
    haha(root->left,res);
    haha(root->right,res);
}

int main(){
    
}