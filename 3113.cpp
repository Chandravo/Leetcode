//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


long long numberOfSubarrays(vector<int>& nums) {
    stack<int> st;
    unordered_map<int,int> mp;
    // unordered_map<int,long long > c;
    long long res = 0;
    for (int i =0;i<nums.size();i++){
        if (st.empty()) {
            st.push(nums[i]);
            mp[nums[i]]++;
            continue;
        }
    // cout<<"hrllo";
        while (!st.empty() && nums[i]>st.top()) {
            mp[st.top()]--;
            st.pop();
        }
        if (!st.empty() && st.top()==nums[i]){
            if (mp.count(st.top()) && mp[st.top()]>=2){
                long long cans;
                // if (c.count(mp[st.top()])) cans = c[mp[st.top()]];
                // else {
                    // cans = fact(mp[st.top()])/(fact(mp[st.top()]-2)*2LL);
                    cans = (mp[st.top()]*(long long)(mp[st.top()]-1))/2;
                    // c[mp[st.top()]] = cans;
                // }
                // cout<<"curr res = "<<res<<" now minus "<<cans<<endl;
                res -= cans;
            }
            mp[nums[i]]++;
            // cout<<"mp[st.top()] = "<<fact(mp[st.top()]-2)<<endl;
            // cout<<fact(mp[st.top()])<<" "<<(fact(mp[st.top()]-2)*2LL)<<endl;
            // long long newcans = fact(mp[st.top()])/(fact(mp[st.top()]-2)*2LL);
            long long newcans = (mp[st.top()]*(long long)(mp[st.top()]-1))/2LL;
            // cout<<"newcans = "<<newcans<<" st.top = "<<mp[st.top()]<<endl;
            // c[mp[st.top()]] = newcans;
            res+=newcans;
            st.push(nums[i]);
            // cout<<"res = "<<res<<endl;
            // mp[nums[i]]++;
        }
        
        else {
            st.push(nums[i]);
            mp[nums[i]]++;
        }

    }       
    // for (auto &i:mp){
    //     cout<<i.first<<" "<<i.second<<endl;
    //     // if (i.second>=2){
    //     //     res += fact(i.second)/(fact(i.second-2)*2LL);
    //     // }
    // } 
    return res + (long long)nums.size();
}

int main(){
    // cout<<fact(2)<<endl;
}