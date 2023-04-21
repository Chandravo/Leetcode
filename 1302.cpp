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

int deepestLeavesSum(TreeNode* root) {
    int res=0;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()){
        int n=q.size();
        res=0;
        for (int i=0;i<n;i++){
            TreeNode *tmp=q.front();
            q.pop();
            res+=tmp->val;
            if (tmp->left) q.push(tmp->left);
            if (tmp->right) q.push(tmp->right);
        }
        if (q.empty()) return res;
    }
    return 0;
}

int main(){
    
}