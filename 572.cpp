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

bool sameTree(TreeNode *n1,TreeNode *n2){
    if (n1==nullptr && n2==nullptr){
        return true;
    }
    if (n1==nullptr || n2==nullptr){
        return false;
    }
    if (n1->val!=n2->val){
        return false;
    }
    return sameTree(n1->left,n2->left) && sameTree(n1->right,n2->right);
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if (root==nullptr){
        return false;
    }
    if (sameTree(root,subRoot)){
        return true;
    }
    
    return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    
}

int main(){
    
}