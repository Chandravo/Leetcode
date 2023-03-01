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


bool evaluateTree(TreeNode* root) {
    if (!root->left && !root->right) return (bool)(root->val);
    if (root->val==2) return evaluateTree(root->left) || evaluateTree(root->right);
    return evaluateTree(root->left) && evaluateTree(root->right);
}

int main(){
    
}