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

void helper(TreeNode *root, vector<int> &v){
    if (!root) return;
    if (!root->left && !root->right){
        v.push_back(root->val);
        return;
    }
    helper(root->right,v);
    helper(root->left,v);
}

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> v1,v2;
    helper(root1,v1);
    helper(root2,v2);
    return v1==v2;
}

int main(){
    
}