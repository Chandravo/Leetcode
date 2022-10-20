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

TreeNode* invertTree(TreeNode* root) {
    if (root==NULL){
        return NULL;
    }
    // TreeNode *tmp=root->right;
    // root->right=root->left;
    // root->left=tmp;
    swap(root->right,root->left);

    invertTree(root->right);
    invertTree(root->left);
    return root;
}
int main(){
    
}