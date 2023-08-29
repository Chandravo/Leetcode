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

int lht(TreeNode *root, int c, int r){
    if (root=nullptr) return 0;
    return 1+lht(root->left);
}

vector<vector<int>> verticalTraversal(TreeNode* root) {
    
}



int main(){
    
}