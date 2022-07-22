//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
     int i=0,j=numbers.size()-1;
     vector<int> ans;
     while (i<j){
        while (numbers[i]+numbers[j]<=target){
            if (numbers[i]+numbers[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return (ans);
            }
            i++;
        }
        while (numbers[i]+numbers[j]>=target){
            if (numbers[i]+numbers[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return (ans);
            }
            j--;
        }
     }
     return ans;   
}
int main(){
    vector<int> a{2,7,11,15};
    int t=9;
    for (auto i : twoSum(a,t)){
        cout<<i<<" ";
    }
}