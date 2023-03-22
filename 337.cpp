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

unordered_map<TreeNode *, int> hehe;



int rob(TreeNode* root) {
    if (!root) return 0;
    if (hehe.find(root)!=hehe.end()) return hehe[root];

    int yes_root=0, no_root=0;

    yes_root+=root->val;
    if (root->left) yes_root+=rob(root->left->left)+rob(root->left->right);
    if (root->right) yes_root+=rob(root->right->left)+rob(root->right->right);

    no_root=rob(root->left)+rob(root->right);
    int res=max(yes_root,no_root);
    hehe[root]=res;
    return res;
}

int main(){
    
}