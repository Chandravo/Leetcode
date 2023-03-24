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

int tilt=0;

int helper(TreeNode* root) {
    if(!root) return 0;
    int leftSum=helper(root->left);                
    int rightSum=helper(root->right);              
    tilt+= abs(leftSum-rightSum);              
    return leftSum+rightSum+root->val;
}

int findTilt(TreeNode* root) {
    helper(root);
    return tilt;
}


int main(){
    
}