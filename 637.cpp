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

vector<double> averageOfLevels(TreeNode* root) {
    queue<TreeNode *> q;
    q.push(root);
    vector<double> res;
    // res.push_back(root->val);
    while (!q.empty()){
        int n=q.size();
        double sum=0;
        for (int i=0;i<n;i++){
            TreeNode *tmp=q.front();
            sum+=tmp->val;
            q.pop();
            if (tmp->left) q.push(tmp->left);
            if (tmp->right) q.push(tmp->right);
        }
        res.push_back(sum/n);
    }
    return res;
}

int main(){
    
}