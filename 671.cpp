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

void helper(TreeNode *root, int &m, int &t){
    if (root==nullptr || root->val!=t || root->left==nullptr && root->right==nullptr) return;
    if (root->right && root->right->val!=t){
        m=min(m,root->right->val);
        if (root->left->val==t) helper(root->left,m,t);
    }
    if (root->left && root->left->val!=t){
        m=min(m,root->right->val);
        if (root->right->val==t) helper(root->right,m,t);
    }
}

int findSecondMinimumValue(TreeNode* root) {
    int m=INT_MAX;
    int t=root->val;
    helper(root,m,t);
    if (m==t) return -1;
    return m;
}

int main(){
    
}