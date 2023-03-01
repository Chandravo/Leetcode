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

void helper(TreeNode *root,int &x){
    if (!root) return;
    if (x<root->val){
        if (!root->left){
            root->left=new TreeNode(x);
            return;
        }
        else{
            helper(root->left,x);
        }
    }
    else{
        if (!root->right) {
            root->right=new TreeNode(x);
            return;
        }
        else{
            helper(root->right,x);
        }
    }
}

TreeNode* insertIntoBST(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    TreeNode *tmp=root;
    helper(tmp,val);
    return root;
}

int main(){
    
}