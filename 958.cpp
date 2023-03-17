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

bool helper(TreeNode *root, int ind, int &total){
    if (!root) return true;
    if (ind>total) return false;
    return helper(root->left,ind*2,total) && helper(root->right,ind*2+1,total);
}

int totalNodes(TreeNode *root){
    if (!root) return 0;
    return 1 + totalNodes(root->left) + totalNodes(root->right);
}

bool isCompleteTree(TreeNode* root) {
    if (!root) return true;
    int total=totalNodes(root);
    return helper(root,1,total);
}

int main(){
    
}