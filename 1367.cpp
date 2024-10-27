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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool dfs(ListNode *head, TreeNode *root){
    if (!head) return true;
    if (!root) return false;
    if (head->val!=root->val) return false;

    return dfs(head->next, root->left) || dfs(head->next, root->right);
}


bool isSubPath(ListNode* head, TreeNode* root) {
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()){
        auto t = q.front();
        q.pop();
        if (t->val==head->val){
            if (dfs(head, t)) return true;
        }
        if (t->left) q.push(t->left);
        if (t->right) q.push(t->right);
    }
    return false;
}



int main(){
    
}