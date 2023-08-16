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
// int gcd(int a, int b)
// {

//     if (a == 0)
//         return b;
//     if (b == 0)
//         return a;
 
//     // Base case
//     if (a == b)
//         return a;
 
//     // a is greater
//     if (a > b)
//         return gcd(a - b, b);
//     return gcd(a, b - a);
// }
ListNode* insertGreatestCommonDivisors(ListNode* head) {
    ListNode *curr=head, *prev=nullptr;
    while (curr!=nullptr){
        if (!prev){
            prev=curr;
        }
        else{
            ListNode *temp = new ListNode(__gcd(prev->val,curr->val));
            prev->next=temp;
            temp->next=curr;
            prev=curr;
        }
        curr=curr->next;
    }      
    return head;  
}

int main(){
    
}