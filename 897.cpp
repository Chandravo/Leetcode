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

void helper(TreeNode *root1, TreeNode* &root2){
    if (!root1) return;
    helper(root1->left,root2);
    root2->right=new TreeNode(root1->val);
    root2=root2->right;
    helper(root1->right,root2);
}

TreeNode* increasingBST(TreeNode* root) {
    TreeNode *root2=new TreeNode(INT_MIN);
    TreeNode *res=root2;
    helper(root,root2);
    return root2;
}

int main(){
    
}