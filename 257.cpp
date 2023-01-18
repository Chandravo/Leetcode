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

void get_length(TreeNode *root, vector<string> &res, string &s){
    if (root->left==nullptr && root->right==nullptr){
        s+=to_string(root->val);
        res.push_back(s);
        s="";
        return;
    }
  
    s+=to_string(root->val)+"->";
    if (root->left!=nullptr) get_length(root->left,res,s);
    if (root->right!=nullptr) get_length(root->right,res,s);
}


vector<string> binaryTreePaths(TreeNode* root) {
    if (root==nullptr) return {""};
    vector<string> ans;
    int h=0;
    string s="";
    get_length(root, ans, s);
    return ans;
}

int main(){
       
}