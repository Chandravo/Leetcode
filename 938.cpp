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

int rangeSumBST(TreeNode* root, int low, int high) {
    if (!root) return 0;
    if (root->val>high) return rangeSumBST(root->left,low,high);
    if (root->val<low) return rangeSumBST(root->right,low,high);
    else return root->val+rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
}

int main(){
    
}