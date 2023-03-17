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

int res=INT_MIN;

int helper(TreeNode *root){
    if (root==nullptr) return 0;
    int left = helper(root->left);
    int right = helper(root->right);
    res=max(res,root->val+left+right);
    return (root->val+max(left,right)>0)? root->val+max(left,right):0;
}

int maxPathSum(TreeNode* root) {
    if (root->left==nullptr && root->right==nullptr) return root->val;
    helper(root);
    return res;
}

int main(){
    
}