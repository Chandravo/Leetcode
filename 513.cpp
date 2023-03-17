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

int findBottomLeftValue(TreeNode* root) {
    queue<TreeNode *> q;
    q.push(root);
    int res;
    while (!q.empty()){
        res=q.front()->val;
        short int n=q.size();
        for (short int i=0;i<n;i++){
            TreeNode *tmp = q.front();
            q.pop();
            if (tmp->left) q.push(tmp->left);
            if (tmp->right) q.push(tmp->right);
        }
    }   
    return res;     
}

int main(){
    
}