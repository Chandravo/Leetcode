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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *l1=headA,*l2=headB;
    while (l1!=l2){
        if (l1!=nullptr){
            l1=l1->next;
        }
        else{
            l1=headB;
        }
        if (l2!=nullptr){
            l2=l2->next;
        }
        else{
            l2=headA;
        }
    }  
    return l1;      
}

int main(){
    
}