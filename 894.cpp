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


unordered_map<int,vector<TreeNode *> > f;


vector<TreeNode*> allPossibleFBT(int n) {
    if (f.find(n)!=f.end()){
        return f[n];
    }
    if (!n&1){
        return {};
    }
    if (n==1) {
        f[n]={new TreeNode()};
        return f[n];
    }
    vector<TreeNode *>res;
    
    for (int i=1;i<n-1;i+=2){
        vector<TreeNode *> l = allPossibleFBT(i); 
        vector<TreeNode *> r = allPossibleFBT(n-1-i);
        for (auto i:l){
            for (auto j:r){
                TreeNode *root = new TreeNode();
                root->left=i;
                root->right=j;
                res.push_back(root);
            }
        }   
    }
    f[n]=res;
    return res;
}

int main(){
    
}