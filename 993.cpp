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


bool isCousins(TreeNode* root, int x, int y) {
    int xp=-1,yp=-1;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()){
        int n = q.size();
        for (int i=0;i<n;i++){
            auto tmp=q.front();
            q.pop();
            if (tmp->right){
                if (tmp->right->val==x) xp=tmp->val;
                else if (tmp->right->val==y) yp=tmp->val;
                q.push(tmp->right);
            }
            if (tmp->left){
                if (tmp->left->val==x) xp=tmp->val;
                else if (tmp->left->val==y) yp=tmp->val;
                q.push(tmp->left);
            }
        }
        if ((xp==-1 && yp!=-1) || (xp!=-1 && yp==-1) || (xp!=-1 && xp==yp)) return false;
        if (xp!=yp) return true;
    }
    return true;
}

int main(){
    
}