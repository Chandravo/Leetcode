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

TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
    // reverse(postorder.begin(), postorder.end());
    unordered_map<int,int> mp;
    for (int i = 0;i<postorder.size();i++){
        mp[postorder[i]] = i;
    }
}

int main(){
    
}