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

int dfs(TreeNode *node, int& res){
    if (node==nullptr){
        return 0;
    }
    int left = dfs(node->left,res);
    int right = dfs(node->right,res);
    res=max(res,left+right);
    return 1+max(left,right);
}

int diameterOfBinaryTree(TreeNode* root) {
    int res=0;
    dfs(root,res);
    return res;
      
}


int main(){
    
}