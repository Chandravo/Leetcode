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

string s="";
unsigned int res=0;

void helper(TreeNode *root){
    s.push_back('0'+root->val);
    if (!root->right && !root->left) {
        res+=stoi(s);
    }
    if (root->left) helper(root->left);
    if (root->right) helper(root->right);
    s.pop_back();
}

int sumNumbers(TreeNode* root) {
    helper(root);
    return res;
}

int main(){
    
}