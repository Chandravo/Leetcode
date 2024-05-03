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

#define ln ListNode


ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    a--;b++;
    ln *ptr1 = list1;
    ln *ptr2 = list1;
    while (b--){
        if (a!=0){
            ptr1 = ptr1->next;
        } 
        ptr2 = ptr2->next;
    }
    ptr1->next = list2;
    ptr1 = list2;
    while (ptr1->next) ptr1->next;
    ptr1->next = ptr2;
    return list1;
}

int main(){
    
}