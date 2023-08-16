//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int getres(vector<int> &nums,int num){
    int i=0,j=0;
    vector<int> dis(nums.size(),0);
    while (j<nums.size()){
        if (nums[j]==num){
            while (i!=j){
                dis[i]=j-i;
                i++;
            }
            j++;i++;
        } 
        else j++;
    }
    cout<<"After first loop"<<endl;
    for (int k:dis) cout<<k<<" ";
    cout<<endl;
    j=nums.size()-1;i=nums.size()-1;
    while (j>=0){
        if (nums[j]==num){
            while (i!=j){
                if (dis[i]!=0) dis[i]=min(i-j,dis[i]);
                else dis[i]=i-j;
                i--;
            }
            j--;i--;
        } 
        else j--;
    }
    cout<<"After second loop"<<endl;
    for (int k:dis) cout<<k<<" ";
    cout<<endl;
    if (dis[nums.size()-1]<dis[0]){
        int _=0;
        int temp = dis[nums.size()-1]+1;
        while (_<nums.size() && dis[_]>temp){
            dis[_]=temp;
            temp++;
            _++;
        }
    }
    else if (dis[0]<dis[nums.size()-1]){
        int _=nums.size()-1;
        int temp = dis[0]+1;
        while (_>=0 && dis[_]>temp){
            dis[_]=temp;
            temp++;
            _--;
        }
    }
    return *max_element(dis.begin(),dis.end());
}

int minimumSeconds(vector<int>& nums) {
    unordered_map<int,int> f;
    for (int i:nums) f[i]++;
    int mx=INT_MIN,num;
    for (auto i:f){
        if (i.second>mx) {
            mx=i.second;
        }
    }
    int res=INT_MAX;
    for (int i:nums){
        res=min(res,getres(nums,i));
        if (res<=1) return res;
    }
    // for (auto i:f){
    //     if (i.second==mx) {
    //         res=min(res,getres(nums,i.first));
    //         if (res==1) return res;
    //     }
    // }
    // int i=0,j=0;
    // vector<int> dis(nums.size(),0);
    // while (j<nums.size()){
    //     if (nums[j]==num){
    //         while (i!=j){
    //             dis[i]=j-i;
    //             i++;
    //         }
    //         j++;i++;
    //     } 
    //     else j++;
    // }
    // cout<<"After first loop"<<endl;
    // for (int k:dis) cout<<k<<" ";
    // cout<<endl;
    // j=nums.size()-1;i=nums.size()-1;
    // while (j>=0){
    //     if (nums[j]==num){
    //         while (i!=j){
    //             if (dis[i]!=0) dis[i]=min(i-j,dis[i]);
    //             else dis[i]=i-j;
    //             i--;
    //         }
    //         j--;i--;
    //     } 
    //     else j--;
    // }
    // cout<<"After second loop"<<endl;
    // for (int k:dis) cout<<k<<" ";
    // cout<<endl;
    // if (dis[nums.size()-1]<dis[0]){
    //     int _=0;
    //     int temp = dis[nums.size()-1]+1;
    //     while (_<nums.size() && dis[_]>temp){
    //         dis[_]=temp;
    //         temp++;
    //         _++;
    //     }
    // }
    // else if (dis[0]<dis[nums.size()-1]){
    //     int _=nums.size()-1;
    //     int temp = dis[0]+1;
    //     while (_>=0 && dis[_]>temp){
    //         dis[_]=temp;
    //         temp++;
    //         _--;
    //     }
    // }
    // return *max_element(dis.begin(),dis.end());
    return res;
}

int minimumSeconds(vector<int>& nums) {
    for (int i=)        
}

int main(){
    vector<int> nums{1,11,11,11,19,12,8,7,19};
    cout<<minimumSeconds(nums)<<endl;
}