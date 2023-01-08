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

vector<int> postorderTraversal(TreeNode* root) {
    vector<int> res;
    getpost(root,res);
    return res;
}

void getpost(TreeNode *root, vector<int> &r){
    if (root==nullptr){
        return ;
    }
    getpost(root->left,r);
    getpost(root->right,r);
    r.push_back(root->val);
    
}

int main(){
    
}