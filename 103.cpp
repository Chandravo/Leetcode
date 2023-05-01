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

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> res;
    queue<TreeNode *> q;
    vector<int> tmp;
    q.push(root);
    while (!q.empty()){
        int n=q.size();
        tmp.clear();
        for (int i=0;i<n;i++){
            TreeNode *t=q.front();
            q.pop();
            tmp.push_back(t->val);
            if (t->left) q.push(t->left);
            if (t->right) q.push(t->right);
            
        }
        if (res.size()%2!=0) reverse(tmp.begin(),tmp.end());
        res.push_back(tmp);
    }  
    return res;      
}

int main(){
    
}