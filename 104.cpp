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
//iterative approach
// int maxDepth(TreeNode* root) {
//     if (root==nullptr){
//         return 0;
//     }
//     int res=0;
//     queue<TreeNode*> q;
//     q.push(root);
//     while (!q.empty()){
//         int cnt=q.size();
//         for (int i=0;i<cnt;i++){
//             TreeNode *tmp=q.front();
//             q.pop();
//             if (tmp->left!=nullptr){
//                 q.push(tmp->left);
//             }
//             if (tmp->right!=nullptr){
//                 q.push(tmp->right);

//             }

//         }
//         res++;
//     }       
//     return res;
// }

// recursive approach
int maxDepth(TreeNode* root) {
    if (root==nullptr){
        return 0;
    }        
    return 1+max(maxDepth(root->left),maxDepth(root->right));
}

int main(){
    
}