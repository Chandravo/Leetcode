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

vector<vector<int>> res;

void dfs(tn *root, int curr, vector<int> &v, int &t){
    if (!root){
        return;
    }
    curr+=root->val;
    v.push_back(root->val);
    if (!root->left && !root->right && curr==t) res.push_back(v);
    dfs(root->left, curr, v, t);
    dfs(root->right, curr, v, t);
    v.pop_back();

}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<int> v;
    dfs(root, 0, v, targetSum);
    return res;
}



int main(){
    
}