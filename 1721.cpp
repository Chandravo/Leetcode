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

ListNode* swapNodes(ListNode* head, int k) {
    ListNode *tmp,*p1,*p2;
    p1=head;
    k--;
    while (k--){
        tmp=tmp->next;
    }        
    p2=tmp;
    p1=head;
    while (tmp->next){
        tmp=tmp->next;
        p1=p1->next;
    }
    swap(p1->val,p2->val);
    return head;
}

int main(){
    
}