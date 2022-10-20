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

// void reorderList(ListNode* head) {
//     if (head==nullptr || head->next==nullptr){
//         return;
//     }        
//     ListNode *p=head;
//     vector<ListNode *>v;
//     while (p!=nullptr){
//         v.push_back(p);
//         p=p->next;
//     }
//     p=head;
//     int n=v.size();
//     for (int i=0;i<v.size()/2;i++){
//         ListNode *tmp=p->next;
//         p->next=v[n-i-1];
//         // v[n-i-2]->next=nullptr;
//         if (p->next){

//             p->next->next=tmp;
//         }
//         p=tmp;
//     }
// }

void reorderList(ListNode* head) {
    ListNode *slow=head,*fast=head->next;
    while (fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }        
    ListNode *second=slow->next;
    slow->next=nullptr;
    ListNode *prev=nullptr;

    while (second!=nullptr){
        ListNode *tmp=second->next;
        second->next=prev;
        prev=second;
        second=tmp;
    }

    second=prev;
    ListNode *first=head;
    while (second){
        ListNode *tmp1=first->next;
        ListNode *tmp2=second->next;
        first->next=second;
        second->next=tmp1;
        first=tmp1;
        second=tmp2;
    }

}

int main(){
    
}