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

int kthSmallest(TreeNode* root, int k) {
    int res;
    inorderTraveral(root,k,res);
    return res;
}

void inorderTraveral(TreeNode *root, int &k, int &res){
    if (root==nullptr){
        return ;
    }
    inorderTraveral(root->left,k,res);
    if (k==0){
        res=root->val;
        return;
    }
    inorderTraveral(root->right,k,res);
}

int main(){
    
}