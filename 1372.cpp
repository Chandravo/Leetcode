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

// int res=0;

int helper(TreeNode *root, int l, bool goLeft){
    if (!root) return l;
    int tmp;
    if ((goLeft && !root->left) || (!goLeft && !root->right)) {
        tmp=l;
        l=0;
    }

    int r=helper(root->right,goLeft? 1:l+1,true);
    int le=helper(root->left,goLeft? l+1:1,false);
    return max({tmp,r,le});
}

int longestZigZag(TreeNode* root) {
    // if (!root ) return 0;
    if (!root->right && !root->left) return 0;
    return helper(root,0,false);
}

int main(){
    
}