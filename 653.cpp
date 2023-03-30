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

void inorder(TreeNode *root, vector<int> &in){
    if (root==nullptr) return ;
    inorder(root->left,in);
    in.push_back(root->val);
    inorder(root->right,in);
}

bool findTarget(TreeNode* root, int k) {
    vector<int> in;
    inorder(root,in);
    int i=0,j=in.size()-1;
    // if (in.size()==1){
    //     return in[0]==k;
    // }
    while (i<j){
        if (in[i]+in[j]>k){
            j--;
        }
        else if (in[i]+in[j]<k){
            i++;
        }
        else return true;
    }
    return false;
}

int main(){
    
}