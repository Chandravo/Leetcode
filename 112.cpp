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


bool hasPathSum(TreeNode* root, int sum) {
	if (root==nullptr){
		return false;
	}	
	sum-=root->val;
	if (sum==0 && !root->left && !root->right){
		return true;
	}
	return hasPathSum(root->right,sum) || hasPathSum(root->left,sum);
}

int main(){
	
}