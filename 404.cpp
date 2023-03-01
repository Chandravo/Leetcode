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

void helper(TreeNode *root,int &res){
    if (root==nullptr) return;
    if (root->left && root->left->left==nullptr && root->left->right==nullptr) {
        res+=root->left->val;
    }
    helper(root->right,res);
    helper(root->left,res);
}


int sumOfLeftLeaves(TreeNode* root) {
    if ((root==nullptr) || (root->left==nullptr && root->right==nullptr)) return 0;
    int res=0;
    helper(root,res);
    return res;
}

int main(){
    
}