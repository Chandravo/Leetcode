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

int diameterOfBinaryTree(TreeNode* root) {
    int cnt=0;
    TreeNode *p=root;
    while (p->left){
        p=p->left;
        cnt++;
    }
    p=root;
    while (p->right){
        p=p->right;
        cnt++;
    }
    return cnt;
}

int main(){
    
}