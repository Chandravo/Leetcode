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

bool res(TreeNode *r1, TreeNode *r2){
	if (!r1 && !r2){
		return true;
	}
	if (!r1 || !r2){
		return false;
	}
	if (r1->val==r2->val){
		return res(r1->left,r2->right) && res(r1->right,r2->left);
	}
	return false;
}

bool isSymmetric(TreeNode* root) {
	return res(root->left,root->right);        
}

int main(){
	
}