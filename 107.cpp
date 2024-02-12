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



vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> res;
    queue<tn *> q;
    if (root) q.push(root);
    while (!q.empty()){
        int n = q.size();
        vector<int> t;
        for (int i=0;i<n;i++){
            tn *temp = q.front();
            q.pop();
            t.push_back(temp->val);
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        res.push_back(t);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    
}