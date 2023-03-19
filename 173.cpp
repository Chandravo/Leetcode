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

class BSTIterator {
    vector<int> v;
    int ptr;
public:
    void inorder(TreeNode *root){
        if (!root) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
        ptr=-1;
    }
    
    int next() {
        return v[++ptr];
    }
    
    bool hasNext() {
        return (ptr+1<v.size())? true:false;
    }
};

int main(){
    
}