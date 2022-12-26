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



TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
	if (!root1){
		return root2;
	}
	if (!root2){
		return root1;
	}
	TreeNode *ans = new TreeNode(root1->val+root2->val);
	if (root1->left || root2->left){
		ans->left = mergeTrees(root1->left,root2->left);
	}
	if (root1->right || root2->right){
		ans->right = mergeTrees(root1->right,root2->right);
	}
	return ans;

}

int main(){
	
}