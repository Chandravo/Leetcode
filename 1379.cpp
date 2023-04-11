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

void helper(TreeNode *o,TreeNode *c, TreeNode *t, TreeNode *&res){
    if (!o || !c) return;
    if (o==t) res=c;
    helper(o->left,c->left,t,res);
    helper(o->right,c->right,t,res);
}

TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    TreeNode *res=nullptr;
    helper(original,cloned,target,res);
    return res;
}

int main(){
    
}