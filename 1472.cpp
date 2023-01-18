//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class DL{
    public:
    string val;
    DL *next;
    DL *prev;
    DL(){
        next=nullptr;
        prev=nullptr;
    }
    DL(string s){
        val=s;
        prev=nullptr;
        next=nullptr;
    }
};

class BrowserHistory {
    DL *curr;
public:
    BrowserHistory(string homepage) {
        curr = new DL(homepage);
    }
    
    void visit(string url) {
        if (curr==nullptr){
            curr=new DL(url);
            return;
        }
        curr->next=new DL(url);
        curr->next->prev=curr;
        curr=curr->next;
    }
    
    string back(int steps) {
        while (curr!=nullptr && curr->prev!=nullptr && steps!=0){
            curr=curr->prev;
            steps--;
        }
        if (curr!=nullptr) return curr->val;
        return "";
    }
    
    string forward(int steps) {
        while (curr && curr->next && steps){
            curr=curr->next;
            steps--;
        }
        if (curr) return curr->val;
        return "";
    }
};

int main(){
    
}