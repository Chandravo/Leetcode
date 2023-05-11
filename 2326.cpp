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

vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
    vector<vector<int>> res(m,vector<int> (n));
    int t=0,b=m-1,l=0,r=n-1;
    while (t<=b && l<=r){
        for (int i=l;i<=r;i++){
            if(head) res[t][i]=head->val, head=head->next;
            else res[t][i]=-1;
        }
        t++;
        if (t>b) break;
        for (int i=t;i<=b;i++){
            if(head) res[i][r]=head->val, head=head->next;
            else res[i][r]=-1;
        }
        r--;
        if (r<l) break;
        for (int i=r;i>=l;i--){
            if(head) res[b][i]=head->val, head=head->next;
            else res[b][i]=-1;
        }
        b--;
        if (b<t) break;
        for (int i=b;i>=t;i--){
            if(head) res[i][l]=head->val, head=head->next;
            else res[i][l]=-1;
        }
        l++;
    }    
    return res;    
}

int main(){
    
}