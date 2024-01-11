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

#define tn TreeNode 

int res = INT_MIN;

void dfs(tn *root, int mn, int mx){
    if (!root) return;
    res = max(res, abs(mx-root->val));
    res = max(res, abs(mn-root->val));
    mx = max(mx, root->val);
    mn = min(mn, root->val);
    dfs(root->left, mn, mx);
    dfs(root->right, mn, mx);
}

int maxAncestorDiff(TreeNode* root) {
    dfs(root, root->val, root->val);
    return res;
}

int main(){
    
}