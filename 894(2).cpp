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

unordered_map<int,vector<TreeNode *>> m;

vector<TreeNode*> allPossibleFBT(int n) {
    if (m.find(n)!=m.end()) return m[n];
    
    if (n==1) {
        auto temp = new TreeNode(0);
        return m[1]={temp};
    }
    if (!(n&1)) return {};
    vector<TreeNode *> t;
    for (int i=1;i<n-1;i+=2){
        auto l = allPossibleFBT(i);
        auto r = allPossibleFBT(n-i-1);
        for (auto i:l){
            for (auto j:r){
                auto root = new TreeNode(0);
                root->left= i;
                root->right = j;
                t.push_back(root);
            }
        }
    }
    return m[n] = t;
}

int main(){
    
}