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

// vector<int> res;
// int mf=0,f=0;
// int curr=INT_MIN;

// vector<int> findMode(TreeNode* root) {
//     if (root==nullptr) return res;
//     findMode(root->left);
//     if (curr!=root->val){
//         f=1;
//         curr=root->val;
//     }
//     else if (curr==root->val) f++;
//     if (f>mf) {
//         res={curr};
//         mf=f;
//     }
//     else if (f==mf) res.push_back(curr); 
//     findMode(root->right);
//     return res;
// }

void helper(TreeNode *root, unordered_map<int,int> &m){
    if (!root) return;
    m[root->val]++;
    helper(root->right,m);
    helper(root->left,m);
}

vector<int> findMode(TreeNode* root) {
    unordered_map<int,int> m;
    helper(root,m);
    int mx=0;
    vector<int> res;
    for (auto i:m){
        if (i.second>mx) mx=i.second;
    }
    for (auto i:m){
        if (i.second==mx) res.emplace_back(i.first);
    }
    return res;
}

int main(){
    
}