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

int widthOfBinaryTree(TreeNode* root) {
    queue<pair<TreeNode *,int>> q;
    int res=0;
    q.push({root,0});
    while (!q.empty()){
        int n=q.size();
        int start=-1,end=-1;
        for (int i=0;i<n;i++){
            auto tmp=q.front();
            q.pop();
            if (i==0) start = tmp.second;
            end = tmp.second;
            if (tmp.first->left) q.push({tmp.first->left,tmp.second*2});
            if (tmp.first->right) q.push({tmp.first->right,tmp.second*2+1});
        }
        res=max(res,end-start+1);
    }
    return res;
}

int main(){
    
}