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

unordered_map<int,int> f;

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    
    for (int i=0;i<inorder.size();i++){
        f[inorder[i]]=i;
    }
    return helper(inorder,postorder,postorder.size()-1,0,inorder.size()-1);
}

TreeNode *helper(vector<int> &in, vector<int> &po, int ind, int i, int j){
    if (i>j) return nullptr;
    int mid=f[po[ind]];
    TreeNode *node = new TreeNode(po[mid]);
    node->left=helper(in,po,ind-1-(j-mid),i,mid-1);
    node->right=helper(in,po,ind-1,mid+1,j);
    return node;
}

int main(){
    
}