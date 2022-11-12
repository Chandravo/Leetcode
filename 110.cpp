//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// int dfs(TreeNode *root){
//     if (root==nullptr){
//         return 0;
//     }
//     return 1+max(dfs(root->left),dfs(root->right));
// }

// bool isBalanced(TreeNode* root) {
//     if (root==nullptr){
//         return true;
//     }
//     if(!dfs(root->left) || !dfs(root->right)){
//         return false;
//     }
//     if (abs(dfs(root->left)-dfs(root->right))<=1){
//         return isBalanced(root->left) && isBalanced(root->right);
//     }
//     return false;
//

bool dfs(TreeNode *root,int &height){
    if (root==nullptr){
        height=0;
        return true;
    }
    int left=0;
    int right=0;
    if (!dfs(root->left,left) || !dfs(root->right,right)){
        return false;
    }
    if (abs(left-right)>1){
        return false;
    }
    height=1+max(left,right);
    return true;
}

bool isBalanced(TreeNode* root) {
    int height = 0;
    return dfs(root, height);
}

int main(){
    
}