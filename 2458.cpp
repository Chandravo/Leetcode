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
unordered_map<int,int> h;

int dfs(tn *root){
    if (!root) return 0;
    return h[root->val] = 1+max(dfs(root->left), dfs(root->right));
}

vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
    unordered_map<int,int> mp;

    h[root->val] = dfs(root);
    vector<vector<pair<int,vector<int>>>> v;
    queue<TreeNode *> q;
    q.push(root);
    int curr_h = 0;
    while (!q.empty()){
        int n = q.size();
        for (int i=0;i<n;i++){
            auto t = q.front();
            q.pop();
            mp[t->val] = curr_h;
            if (v.size()==curr_h) v.push_back({{-1,{}},{-1,{}}});
            if (h[t->val]>v[curr_h][0].first){
                v[curr_h][1] = v[curr_h][0];
                v[curr_h][0] = {h[t->val],{t->val}};
            }
            else if (h[t->val]==v[curr_h][0].first){
                v[curr_h][0].second.push_back(t->val);
            }
            else if (h[t->val]==v[curr_h][1].first){
                v[curr_h][1].second.push_back(t->val);
            }
            else if (h[t->val]<v[curr_h][0].first && h[t->val]>v[curr_h][1].first){
                v[curr_h][1] = {h[t->val],{t->val}};
            }
            if (t->left) q.push(t->left);
            if (t->right) q.push(t->right);
        }
        curr_h++;
    }
    vector<int> res(queries.size());
    for (int i=0;i<queries.size();i++){
        int mx = 0;
        for (int j=0;j<v[mp[queries[i]]][0].second.size();j++){
            if (v[mp[queries[i]]][0].second[j]!=queries[i]){
                mx = v[mp[queries[i]]][0].first;
                break;
            }
        }
        if (mx==0 || mx==-1){
            mx = v[mp[queries[i]]][1].first;
        }
        if (mx==-1) mx = 0;
        res[i] = mx+mp[queries[i]]-1;
    }
    return res;
}

int main(){
    
}