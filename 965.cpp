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

bool helper(TreeNode *root, int &x){
    if (!root) return true;
    if (root->val!=x) return false;
    return (helper(root->left,x) && helper(root->right,x));
}

bool isUnivalTree(TreeNode* root) {
    int x=root->val;
    return helper(root,x);
}

int main(){
    
}