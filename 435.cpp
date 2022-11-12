//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
// int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//     sort(intervals.begin(),intervals.end());
//     int k=0,j=0;
//     while (j<intervals.size()-1){
//         while (intervals[j][0]==intervals[j+1][0]){
//             if (j==intervals.size()-1){
//                 break;
//             }
//             intervals[j][1]=min(intervals[j][1],intervals[j+1][1]);
//             intervals.erase(intervals.begin()+j+1);
//             k++;
//         }
//         if (j==intervals.size()-1){
//             break;
//         }
//         if (intervals[j][1]>intervals[j+1][0]){
//             intervals.erase(intervals.begin()+j);
//             k++;
//         }
//         j++;
//     } 
//     return k;       
// }

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    int k=0,j=0;
    while (j<intervals.size()-1){
        if (intervals[j][1]>intervals[j+1][0]){
            intervals[j+1][1]=min(intervals[j][1],intervals[j+1][1]);
            
            // cout<<"bruh"<<endl;
            k++;
        }
        j++;
    }  
    return k;      
}

int main(){
    vector<vector<int>> x{{1,2},{1,2},{1,2}};
    cout<<eraseOverlapIntervals(x);
}