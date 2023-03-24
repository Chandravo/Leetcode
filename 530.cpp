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

int answer;
int previous_value;
void solve(TreeNode* root){
    if(!root){
        return;  
    }

    solve(root->left);
    //if previous value is INT_MAX than just store the 
    //root's value and do nothing.
    if(previous_value != INT_MAX)
        answer = min(root->val - previous_value, answer);
    previous_value = root->val;

    solve(root->right);
}

int getMinimumDifference(TreeNode* root) {
    //initializing the variables
    answer = INT_MAX;
    previous_value = INT_MAX;
    solve(root);


    return answer;
}

int main(){
    
}