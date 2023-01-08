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


TreeNode* makeTree(vector<int>& preorder, int prel, int prer, vector<int>& inorder, int inl, int inr, map<int,int>& ind){
    if (prel>prer || inl>inr){
        return nullptr;
    }
    TreeNode *root=new TreeNode(preorder[prel]);
    int mid=ind[root->val];
    root->left=makeTree(preorder,prel+1,prel+mid-inl,inorder,inl,mid-1,ind);
    root->right=makeTree(preorder,prel+mid-inl+1,prer,inorder,mid+1,inr,ind);
    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    if (preorder.size()==0 || inorder.size()==0){
        return nullptr;
    }
    map<int,int> ind;
    for (int i=0;i<inorder.size();i++){
        ind[inorder[i]]=i;
    }
    TreeNode *root=makeTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,ind);
    return root;

}

int main(){
    
}