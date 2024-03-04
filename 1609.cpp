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

#define tn TreeNode

bool isEvenOddTree(TreeNode* root, short int x =-1) {
    queue<tn *> q;
    q.push(root);
    bool lvl = 0;
    while (q.size()){
        int n = q.size();
        int curr = (lvl==0)? INT_MIN : INT_MAX;
        for (int i=0;i<n;i++){
            auto temp = q.front();
            q.pop();
            if (temp->val%2==lvl ) return false;
            if (!lvl && temp->val<=curr) return false;
            else if (lvl && temp->val>=curr) return false;
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
            curr = temp->val;
        }
        lvl = !lvl;
    } 
    return true;
}

int main(){
    
}