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

string res = "";

void dfs(tn *root, string &s){
    if (!root) return;
    if (!root->left && !root->right){
        reverse(s.begin(), s.end());
        if (!res.size() || res>s) res = s;
        reverse(s.begin(), s.end());
    }
    s.push_back('a'+root->val);
    dfs(root->left,s);
    dfs(root->right,s);
    s.pop_back();
}

string smallestFromLeaf(TreeNode* root) {
    string s = "";
    dfs(root, s);
    return res;
}

int main(){
    
}