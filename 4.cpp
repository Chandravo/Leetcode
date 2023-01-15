//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if(nums1.size()>nums2.size()){
        return findMedianSortedArrays(nums2,nums1);
    }        
    int n1=nums1.size();
    int n2=nums2.size();

    int total=n1+n2;
    int l=0;
    int r=n1;
    while (l<=r){
        int i = l+(r-l)/2;
        int j = (total+1)/2-i;

        int l1 = (i>0)? nums1[i-1]:INT_MIN;
        int r1 = (i<n1)? nums1[i]:INT_MAX;
        int l2 = (j>0)? nums2[j-1]:INT_MIN;
        int r2 = (j<n2)? nums2[j]:INT_MAX;

        if (l1<=r2 && l2<=r1){
            if (total%2==0){
                return (min(r1,r2)+max(l1,l2))/2.0;
            }
            else{
                return max(l1,l2);
            }
        }
        else if (l1>r2){
            r=i-1;
        }
        else{
            l=i+1;
        }
        
    }
    return 0.0;

}

int main(){
    
}