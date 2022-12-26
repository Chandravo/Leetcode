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

TreeNode* res(vector<int> nums, int i, int j){
	if (i>j){
		return nullptr;
	}
	int mid=i+(j-i)/2;
	TreeNode* root = new TreeNode(nums[mid]);
	root->left = res(nums,i,mid-1); 
	root->right = res(nums,mid+1,j);
	return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
	return res(nums,0,nums.size()-1)  ;      
}

int main(){
	
}