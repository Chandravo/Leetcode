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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *res=nullptr,*tmp;
    stack<int> st1,st2;
    tmp=l1;
    while (tmp!=nullptr){
        st1.push(tmp->val);
        tmp=tmp->next;
    }
    tmp=l2;
    while (tmp!=nullptr){
        st2.push(tmp->val);
        tmp=tmp->next;
    }
    int carry=0;
    while (!st1.empty() || !st2.empty()){
        int a=0,b=0;
        if (!st1.empty()){
            a=st1.top();
            st1.pop();
        }
        if (!st2.empty()){
            b=st2.top();
            st2.pop();
        }
        tmp= new ListNode((a+b+carry)%10);
        carry = (a+b+carry)/10;
        if (res==nullptr){
            res=tmp;
        }
        else{
            tmp->next=res;
            res=tmp;
        }
    }
    if (carry!=0){
        tmp=new ListNode (carry);
        tmp->next=res;
        res=tmp;
    }

    return res;
}

int main(){
    
}