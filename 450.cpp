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

// void removeNode(TreeNode *root,int x){
//     TreeNode *tmp=(x==0)? root->left:root->right;
//     if (tmp->left==nullptr && tmp->right==nullptr){
//         if (x==0) root->left=nullptr;
//         else root->right=nullptr;
//         return;
//     }
//     else if (tmp->left==nullptr){
//         if (x==0) root->left=tmp->right;
//         else root->right=tmp->right;
//         return;
//     }
//     else if (tmp->right==nullptr){
//         if (x==0) root->left=tmp->left;
//         else root->right=tmp->left;
//         return;
//     }
//     else{
//         TreeNode *tmp1=tmp;
//         tmp=tmp->left;
//         while (tmp->right!=nullptr){
//             tmp1=tmp;
//             tmp=tmp->right;
//         }
//         tmp1->right=nullptr;
//         if (x==0) root->left=tmp;
//         else root->right=tmp;
//         return;
//     }


// }



// void search(TreeNode *root,int &key){
//     if (root==nullptr) return ;
//     if (root->val==key) removeNode(root);
//     if (key<root->val){
//         // if (root->left!=nullptr && root->left->val==key){
//         //     removeNode(root,0);
//         //     return ;
//         // }
//         search(root->left,key);
//     }
//     else if (key>root->val){
//         // if (root->right!=nullptr && root->right->val==key){
//         //     removeNode(root,1);
//         //     return ;
//         // }
//         search(root->right,key);
//     }
    
// }

TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root) return root;
    if (key<root->val) root->left=deleteNode(root->left,key);
    else if (key>root->val) root->right=deleteNode(root->right,key); 
    else{
        if (!root->left) return root->right;
        else if (!root->right) return root->left;
        auto curr=root->right;
        while (curr->left) curr=curr->left;
        root->val=curr->val;
        root->right=deleteNode(root->right,curr->val);
    }
    return root;
}

int main(){
    
}