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



void helper(TreeNode *root, string &s, int &res){
    if (root->left==nullptr && root->right==nullptr){
        s.push_back(root->val+'0');
        res+=stoi(s,0,2);
        s.pop_back();
        return ;
    }
    s.push_back(root->val+'0');
    if (root->left){
        helper(root->left,s,res);
    }
    if (root->right){
        helper(root->right,s,res);
    }
    s.pop_back();
}

int sumRootToLeaf(TreeNode* root) {
    int res=0;
    string s="";
    helper(root,s,res);
    return res;
}

int main(){
    
}