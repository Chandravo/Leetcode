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

int maxLevelSum(TreeNode* root) {
    int s=root->val,lvl=1;
    int curr=1;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()){
        int n=q.size();
        int ts=0;
        for (int i=0;i<n;i++){
            TreeNode *tmp=q.front();
            q.pop();
            ts+=tmp->val;
            if (tmp->right) q.push(tmp->right);
            if (tmp->left) q.push(tmp->left);
        }
        if (ts>s){
            s=ts;
            lvl=curr;
        }
        curr++;
    }       
    return lvl;
}

int main(){
    
}