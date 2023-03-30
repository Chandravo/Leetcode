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

TreeNode* trimBST(TreeNode* root, int &low, int &high) {
    if (!root) return nullptr;

    root->left=trimBST(root->left,low,high);  
    root->right=trimBST(root->right,low,high);

    if (root->val<low || root->val>high){
        if (root->left){
            TreeNode *tmp = root->left;
            root=nullptr;
            delete root;
            return tmp;
        }
        else if (root->right){
            TreeNode *tmp = root->right;
            root=nullptr;
            delete root;
            return tmp;
        }
        else return nullptr;
    }
    return root;
}

int main(){
    
}