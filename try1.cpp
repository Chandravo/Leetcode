//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the size of array ";
    int n;cin>>n;
    int v[n];
    cout<<"enter the array"<<endl;
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    
    // most optimal
    // O(n) Time
    // O(n) space
    // unordered_map<int,int> f;
    // for (int i:v) f[i]++;
    // for (auto i:f){
    //     cout<<i.first<<"\t"<<i.second;
    //     cout<<endl;
    // }
    
    // if all positive numbers upto 1000000
    // O(n) Time
    // O(n) space
    // int arr[1000000]={0};
    // for (int i:v) arr[i]++;
    // for (int i=0;i<1000000;i++){
    //     if (arr[i]!=0) cout<<i<<"\t"<<arr[i]<<endl;
    // }
    

    // for range -1000 to 1000
    // O(n) Time
    // O(n) space
    // int arr[2002]={0};
    // for (int i:v) arr[i+1001]++;
    // for (int i=0;i<2002;i++){
    //     if (arr[i]!=0) cout<<i-1001<<"\t"<<arr[i]<<endl;
    // }

    // sort fist
    // O(nlogn) time
    // O(1) space
    // sort(v,v+n);
    // int i=0;
    // while (i<n){
    //     int cnt=1;
    //     while (i<n-1 && v[i+1]==v[i]) {
    //         cnt++;
    //         i++;
    //     }
    //     cout<<v[i]<<"\t"<<cnt<<endl;
    //     i++;
    // }

    // double loop
    // O(n2) time
    // O(1) space   
    // bool done[n]={false};
    // for (int i=0;i<n;i++){
    //     int cnt=0;
    //     if (!done[i]){
    //         for (int j=i;j<n;j++){
    //             if (v[i]==v[j]) {cnt++;
    //             done[j]=true;}
    //         }
    //         cout<<v[i]<<"\t"<<cnt<<endl;
    //     }
    // }

    struct num{
        int data;
        int cnt;
        bool used;
    };
    num arr[n];
    for (int i=0;i<n;i++){
        arr[i].data=v[i];
        arr[i].cnt=0;
        arr[i].used=0;
    }
    for (int i=0;i<n;i++){
        if (!arr[i].used){
            for (int j=i;j<n;j++){
                if (arr[i].data==arr[j].data){
                    arr[i].cnt++;
                    arr[j].used=1;
                }
            }
        }
    }
    for (auto i:arr){
        if (i.cnt!=0){
            cout<<i.data<<"\t"<<i.cnt<<endl;
        }
    }
    
    cout<<endl;
}