//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& h) {
    int res=0;
    h.push_back(INT_MIN);
    stack<pair<int,int>> st;
    for (int i=0;i<h.size();i++){
        int start=i;
        while (!st.empty() && st.top().second>h[i]) {
            start=st.top().first;
            res=max(res,(st.top().second)*((i-st.top().first)));
            st.pop();
        }
        st.push({i,h[i]});
    }  
    return res;
}

int main(){
    vector<int> h{3,5,5,2,5,5,6,6,4,4,1,1,2,5,5,6,6,4,1,3};
    cout<<largestRectangleArea(h)<<endl;
}