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

int getDecimalValue(ListNode* head) {
    ListNode *p=head;
    short int n=0;
    while (p!=nullptr){
        n++;
        p=p->next;
    } 
    p=head;       
    int res=0;
    for (int i=n-1;i>=0;i--){
        res+=p->val*(1<<i);
        p=p->next;
    }
    return res;
}

int main(){
    
}