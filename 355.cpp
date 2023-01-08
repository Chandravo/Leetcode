//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class Twitter {
    vector<pair<int,int>> posts;
    unordered_map<int,unordered_set<int>> fllw;
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        posts.push_back(pair(userId,tweetId));
    }
    
    vector<int> getNewsFeed(int userId) {
        int cnt=10;
        vector<int> res;
        for (int i=posts.size()-1;i>=0;i--){
            if (cnt==0) break;
            if (fllw[userId].find(posts[i].first)!=fllw[userId].end() || posts[i].first==userId){
                res.push_back(posts[i].second);
                cnt--;
            }
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        fllw[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        fllw[followerId].erase(followeeId);
    }
};

int main(){
    
}