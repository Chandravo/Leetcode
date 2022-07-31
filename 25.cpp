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
ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* dummy=new ListNode(0,head);
    ListNode* groupPrev=dummy;
    while (true){
        ListNode* kth=findkth(groupPrev,k);
        if (kth==nullptr){
            break;
        }
        ListNode* prev=kth->next,*curr=groupPrev->next,*groupNext=kth->next,*temp;
        while (curr!=groupNext){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            
        }
        temp=groupPrev->next;
        groupPrev->next=kth;
        groupPrev=temp;


    }
    return dummy->next;
    

}
ListNode* findkth(ListNode* curr,int k){
    while (curr!=nullptr && k!=0){
        curr=curr->next;
        k--;
    }
    return curr;
}
int main(){
    
}