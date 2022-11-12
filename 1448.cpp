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

void dfs(TreeNode* x,int &cnt, int mle ){
    if (x==nullptr){
        return;
    }
    if(x->left){
        if (x->left->val>=mle){
            cout<<"left "<<x->left->val<<endl;
            cnt++;
        }
        dfs(x->left,cnt,max(mle,x->left->val));
    }
    if(x->right){
        if (x->right->val>=mle){
            cout<<"right "<<x->right->val<<endl;
            cnt++;
        }
        dfs(x->right,cnt,max(mle,x->right->val));
    }
    
    

}

int goodNodes(TreeNode* root) {
    int cnt=0;
    int max_ele=root->val;
    dfs(root,cnt,max_ele);  
    return cnt;      
}


int main(){
    
}