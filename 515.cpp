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

vector<int> largestValues(TreeNode* root) {
    if (!root) return {};
    queue<TreeNode *> q;
    vector<int > res;
    q.push(root);
    while (!q.empty()){
        int mx=INT_MIN;
        int n=q.size();
        for (int i=0;i<n;i++){
            auto tmp = q.front();
            q.pop();
            mx=max(mx,tmp->val);
            if (tmp->left) q.push(tmp->left);
            if (tmp->right) q.push(tmp->right);
        }
        res.push_back(mx);
    }        
    return res;
}

int main(){
    
}