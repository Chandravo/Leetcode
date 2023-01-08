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

int getDepth(TreeNode *root, int h){
    if (root->left==nullptr && root->right==nullptr){
        return h;
    }
    else{
        if (root->left==nullptr){
            return getDepth(root->right,h+1);
        }
        else if (root->right==nullptr){
            return getDepth(root->left,h+1);
        }
        
    }
    return min(getDepth(root->right,h+1),getDepth(root->left,h+1));
}


int minDepth(TreeNode* root) {
    if (root==nullptr){
        return 0;
    }
    return getDepth(root,1);
}

int main(){
    
}