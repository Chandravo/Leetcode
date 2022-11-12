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

vector<int> rightSideView(TreeNode* root) {
    vector<int> res{};
    if (root==nullptr){
        return res;
    }
    queue<TreeNode*> q;
    q.push(root);
    while (q.size()!=0){
        res.push_back(q.back()->val);
        int n=q.size();
        for (int i=0;i<n;i++){
            TreeNode *tmp=q.front();
            q.pop();
            if (tmp->left!=nullptr){
                q.push(tmp->left);
            }
            if (tmp->right!=nullptr){
                q.push(tmp->right);
            }
        }
    }
    return res;
}

int main(){
    
}