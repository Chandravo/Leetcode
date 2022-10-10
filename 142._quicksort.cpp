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

ListNode* sortList(ListNode* head) {
            
}
ListNode *partition(ListNode *l,ListNode *r,ListNode *head){
    ListNode *pivot=l;
    ListNode *i=l->next,*j=l;
    while (i!=r){
        if (i->val<=pivot->val){
            j=j->next;
            swap(i,j);
        }
        i=i->next;
    }
    
}
void swap(ListNode *x,ListNode *y){
    int tmp=x->val;
    x->val=y->val;
    y->val=tmp;
}

int main(){
    
}