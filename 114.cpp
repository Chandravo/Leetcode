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

TreeNode* getright(TreeNode *root){
    if (root->right==nullptr) return root;
    return getright(root->right);
}

void flatten(TreeNode* root) {
    if (root==nullptr) return ;
    TreeNode *next;
    TreeNode *r;
    while (root){
        if (root->left){
            next=root->right;
            r=getright(root->left);
            root->right=root->left;
            root->left=nullptr;
            r->right=next;
        }
        root=root->right;
    }
}

int main(){
    
}