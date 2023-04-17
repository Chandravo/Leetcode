//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#define tn TreeNode
#define ln ListNode


tn* helper(ln *start, ln *end){
    if (start==end) return nullptr;
    ln *slow=start;
    ln *fast=start;
    while (fast!=end && fast->next!=end){
        slow=slow->next;
        fast=fast->next->next;
    }
    tn *tnode = new tn(slow->val);
    tnode->left=helper(start,slow);
    tnode->right=helper(slow->next,end);
    return tnode;
}

TreeNode* sortedListToBST(ListNode* head) {
    return helper(head,nullptr);
}

int main(){
    
}