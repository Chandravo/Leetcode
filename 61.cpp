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

ListNode* rotateRight(ListNode* head, int k) {
    if (head==nullptr || k==0) return head;
    ListNode *p1=head, *p2=head, *p3=head;
    int n=1;
    while(p3->next!=nullptr){
        n++;
        p3=p3->next;
    }
    if (n==1) return head;
    k=k%n;
    if (k==0) return head;
    while (k--){
        p1=p1->next;
    }
    while (p1->next!=nullptr){
        p2=p2->next;
        p1=p1->next;
    }
    p1=p2->next;
    p2->next=nullptr;
    p3->next=head;
    return p1;
}

int main(){
    
}