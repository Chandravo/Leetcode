//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(),
          [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });
    // for (int i=1;i<intervals.size();i++){
    //     if (intervals[i][0]<=intervals[i-1][1]){
    //         intervals[i-1][1]=max(intervals[i][1],intervals[i-1][1]);
    //         intervals.erase(intervals.begin()+i);
    //         i--;
    //     }
    // }
    vector<vector<int>> mergedIntervals;
    if (intervals.size()==0){
        return mergedIntervals;
    }
    vector<int> temp=intervals[0];
    for (auto i:intervals){
        if (i[0]<=temp[1]){
            temp[1]=max(temp[1],i[1]);
        }
        else{
            mergedIntervals.push_back(temp);
            temp=i;
        }

    }
    mergedIntervals.push_back(temp);
    return mergedIntervals;
}
int main(){
    vector<vector<int>> intervals{{1,4},{0,2},{3,5}};
    vector<vector<int>> res=merge(intervals);
    for (int i=0;i<res.size();i++){
        cout<<res[i][0]<<" "<<res[i][1];
        cout<<"         ";
    }
}