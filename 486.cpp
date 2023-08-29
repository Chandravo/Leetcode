//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// int sump1=0,sump2=0;

bool solve(vector<int> &nums, int i, int j, bool x, int p1, int p2,vector<vector<vector<int>>> &dp){
    if (i>j){
        if (p1>p2) return true;
        else return false; 
    }
    if (dp[i][j][x]!=-1) return dp[i][j][x];
    if (x){
        return dp[i][j][x] = solve(nums,i+1,j,!x,p1+nums[i],p2,dp) || solve(nums,i,j-1,!x,p1+nums[j],p2,dp);
    }
    return dp[i][j][x] = solve(nums,i+1,j,!x,p1,p2+nums[i],dp) && solve(nums,i,j-1,!x,p1,p2+nums[j],dp);
}

bool predictTheWinner(vector<int>& nums) {
    vector<vector<vector<int>>> dp(nums.size(),vector<vector<int>> (nums.size(),vector<int> (2,-1)));
    return solve(nums,0,nums.size()-1,1,0,0,dp);
}
int dp[38][38]; //dp array
	//dp[i][j]= maxm a player can score if they have access to elements form index i to index j only
    bool checkWin(int ans,int total){
        return ans>=total-ans;
    }
    int maxScore(vector<int>&A,int total,int i,int j){
        if(i>j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        dp[i][j]=total-min(maxScore(A,total-A[i],i+1,j),maxScore(A,total-A[j],i,j-1));
        return dp[i][j];
    }
    bool PredictTheWinner(vector<int>& nums) {
        int total=0;
        for(int i=0;i<21;i++)
            for(int j=0;j<21;j++)
                dp[i][j]=-1;  //initialising to -1
        for(auto x:nums)
            total+=x;

        return checkWin(maxScore(nums,total,0,nums.size()-1),total);
     }

int main(){
    clock_t start,end;
    start = clock();
    vector<int> nums{43, 17, 92, 68, 55, 23, 87, 5, 36, 71, 29, 81, 9, 62, 47, 14, 64, 33, 79, 58, 96, 11, 52, 27, 73, 39, 89, 2, 69, 45, 18, 82, 63, 31, 75, 21, 84, 53, 37, 91, 8, 66, 41, 86, 3, 24, 98, 57, 13, 78, 50, 16, 72, 28, 67, 94, 1, 49, 25, 76, 35, 61, 22, 88, 4, 65, 42, 97, 15, 93, 59, 19, 83, 51, 38, 85, 6, 32, 74, 10, 56, 26, 70, 7, 34, 80, 20, 54, 46, 90, 12, 60, 48, 95, 30, 77, 40, 99, 44};
    predictTheWinner(nums);
    end=clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

}