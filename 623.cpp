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

TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if (depth==1){
        tn * tmp = new tn (val, root, nullptr);
        tmp->left = root;
        return tmp;
    }
    queue<tn *> q;
    q.push(root);
    int d = 1;
    while (d<depth){
        int n = q.size();
        for (int i=0;i<n;i++){
            tn *temp = q.front();
            q.pop();
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        d++;
    } 
    while (q.size()){
        tn * tmp = q.front();
        q.pop();
        tn *l = new tn(val, tmp->left, nullptr);
        tn *r = new tn(val, nullptr, tmp->right);
        tmp->left = l;
        tmp->right = r;
    }
    return root;
}

int main(){
    
}