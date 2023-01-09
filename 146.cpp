//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int key;
    int val;
    Node *prev;
    Node *next;

    Node (int k, int v){
        key=k;
        val=v;
        prev=nullptr;
        next=nullptr;
    }

    Node (int k, int v, Node *p, Node *r){
        key=k;
        val=v;
        prev=p;
        next=r;
    }
};

class LRUCache {
    int c;
    unordered_map<int, Node*> mp;
    Node *l;
    Node *r;
public:
    LRUCache(int capacity) {
        c=capacity;
        l=new Node(0,0);
        r=new Node(0,0,l,nullptr);
        l->next=r;
    }
    
    int get(int key) {
        if (mp.find(key)!=mp.end()){
            mp[key]->prev->next=mp[key]->next;
            mp[key]->next->prev=mp[key]->prev;
            mp[key]->next=r;
            r->prev->next=mp[key];
            mp[key]->prev=r->prev;
            r->prev=mp[key];
            return mp[key]->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (mp.find(key)!=mp.end()){
            mp[key]->prev->next=mp[key]->next;
            mp[key]->next->prev=mp[key]->prev;
            delete(mp[key]);
        }

        mp[key]=new Node(key,value,r->prev,r);
        r->prev->next=mp[key];
        r->prev=mp[key];
        mp[key]=mp[key];

        if (mp.size()>c){
            Node *tmp=l->next;
            mp.erase(tmp->key);
            l->next=tmp->next;
            tmp->next->prev=l;
            delete tmp;
        }
        
    }
};

int main(){
    
}