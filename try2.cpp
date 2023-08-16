//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode *next;
    SinglyLinkedListNode() : data(0), next(nullptr) {}
    SinglyLinkedListNode(int x) : data(x), next(nullptr) {}
    SinglyLinkedListNode(int x, SinglyLinkedListNode *next) : data(x), next(next) {}
};
// struct Node {
//     int data;
//     Node *next;
//     Node() : data(0), next(nullptr) {}
//     Node(int x) : data(x), next(nullptr) {}
//     Node(int x, Node *next) : data(x), next(next) {}
// };

#define Node SinglyLinkedListNode

// SinglyLinkedListNode * findLongestList(SinglyLinkedListNode *head){
//     SinglyLinkedListNode *ptr=head;
//     vector<int> arr;
//     while (ptr){
//         arr.push_back(ptr->data);
//         ptr=ptr->next;
//     }
//     cout<<"arr size "<<arr.size()<<endl;
//     int i=0;
//     int start = -1;
//     int mx = INT_MIN;
//     while (i<arr.size()){
//         int tempstart = i;
//         int curr=1;
//         if (i!=arr.size()-1){
//             while(i<arr.size()-1 && arr[i+1]<=arr[i]){
//                 curr++;
//                 i++;
//             }
//         }
//         if (curr>mx){
//             start = tempstart;
//             mx = curr;
//         }
//         i++;
//         cout<<i<<endl;
//     }
//     cout<<"jdfj"<<endl;
//     ptr=head;
//     while(start){
//         ptr=ptr->next;
//         start--;
//     }
//     cout<<"nopice"<<endl;
//     SinglyLinkedListNode *res=ptr;
//     while (mx-1>0){
//         ptr=ptr->next;
//     }
//     cout<<"lol"<<endl;
//     ptr->next=NULL;
//     return res;
// }
Node* countIncreasingElements(struct Node *head)
{
    int curr_len = 1, max_len = 1;
    int total_count = 1, res_index = 0;
    for (Node *curr=head; curr->next!=NULL; curr=curr->next)
    {
        if (curr->data >= curr->next->data)
            curr_len++;
        else
        {
            if (max_len < curr_len)
            {
                max_len = curr_len;
                res_index = total_count - curr_len;
            }
 
            curr_len = 1;
        }
        total_count++;
    }
 
    if (max_len < curr_len)
    {
        max_len = curr_len;
        res_index = total_count - max_len;
    }
 
 
    int i = 0;
    Node *res =head;
    for (Node* curr=head; curr!=NULL; curr=curr->next)
    {
        if (i == res_index)
        {
            res=curr;
            while (max_len > 1)
            {
                // cout << curr->data << " ";
                curr = curr->next;
                max_len--;
            }
            curr->next=NULL;
            break;
        }
 
        i++;
    }
    return res;
}

int main(){
    SinglyLinkedListNode *A=new SinglyLinkedListNode(3);    
    SinglyLinkedListNode *B=new SinglyLinkedListNode(2);    
    SinglyLinkedListNode *C=new SinglyLinkedListNode(1);    
    SinglyLinkedListNode *D=new SinglyLinkedListNode(4);  
    A->next=B;
    B->next=C;
    C->next=D;
    D->next=nullptr;
    SinglyLinkedListNode* res =  countIncreasingElements(A);
    while (res){
        cout<<res->data;
        res=res->next;
    }
    // countIncreasingElements(A);
}