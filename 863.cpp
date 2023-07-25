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

vector<int> res;
unordered_map<TreeNode *, TreeNode *> mp;
unordered_set<TreeNode *> visited;

void makeParent(TreeNode *root){
    if (!root) return;
    if (root->left) {
        mp[root->left]=root;
        makeParent(root->left);
    }
    if (root->right) {
        mp[root->right]=root;
        makeParent(root->right);
    }
    return;
}

void dfs (TreeNode *root, int k){
    if (!root || visited.count(root)) return;
    visited.insert(root);
    if (k==0) res.push_back(root->val);
    dfs(root->left,k-1);
    dfs(root->right,k-1);
    if (mp.find(root)!=mp.end()){
        dfs(mp[root],k-1);
    }
    return;
}


vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    makeParent(root);
    dfs(root,k);
    return res;
}

int main(){
    
}