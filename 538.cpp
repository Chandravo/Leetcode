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

int curr=0;

void helper(TreeNode *root){
    if (!root) return ;
    helper(root->right);
    int tmp=root->val;
    root->val+=curr;
    curr+=tmp;
    helper(root->left);
}

TreeNode* convertBST(TreeNode* root) {
    helper(root);
    return root;
}

int main(){
    
}