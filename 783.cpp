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

vector<int> in;

void helper(TreeNode *root){
    if (!root) return;
    helper(root->left);
    in.push_back(root->val);
    helper(root->right);
}

int minDiffInBST(TreeNode* root) {
    helper(root);
    int res=INT_MAX;
    for (int i=1;i<in.size();i++){
        if (abs(in[i]-in[i-1])<res) res=abs(in[i]-in[i-1]);
    }
    return res;
}

int main(){
    
}