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

ListNode* removeZeroSumSublists(ListNode* head) {
    ln *dum = new ln (0, head);
    unordered_map<int, ln*> mp;
    mp.insert({0,dum});
    ln *ptr = dum;
    int curr = 0;
    while (ptr && ptr->next){
        curr+=ptr->next->val;
        // if (!mp.count(curr) || mp[curr]->val=-1001) mp.insert({curr, ptr->next});
        if (!mp.count(curr) || mp[curr]->val== -1001) mp[curr] = ptr->next;
        else{
            ln *temp = ptr;
            ptr = ptr->next;
            ln *start = mp[curr];
            while (start->next!=ptr){
                // ln *tmp = start->next;
                start->next->val = -1001;
                start->next = start->next->next;
                // delete tmp;
            }
            start->next = ptr->next;

            // ptr = temp;
            continue;
        }
        ptr = ptr->next;
    }
    return dum->next;
}

int main(){
    
}