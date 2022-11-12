//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
class DetectSquares {
    unordered_map<int,unordered_map<int,int>>points;
public:
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        points[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) {
        int res=0;
        for (auto i=points.begin();i!=points.end();i++){
            for (auto j=(i->second).begin();j!=(i->second).end();j++){
                if (abs(i->first-point[0])==0 || abs(i->first-point[0])!=abs(j->first - point[1])){
                    continue;
                }
                else{
                    res+=j->second*points[point[0]][j->first]*points[i->first][point[1]];
                }
            }
        }
        return res;
    }
};
int main(){
    
}