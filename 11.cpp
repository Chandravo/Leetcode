//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
    int ans=0;
    int i=0,j=height.size()-1;
    while (i<j){
        ans=max(ans,min(height[i],height[j])*(j-i));
        if (height[i]>=height[j]){
            j--;
        }
        else {
            i++;
        }
    
    }
    return ans;        
}
int main(){
    vector<int> h{1,8,6,2,5,4,8,3,7};
    cout<<maxArea(h);
}

