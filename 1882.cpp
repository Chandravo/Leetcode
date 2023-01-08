//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> av;
    for(int i=0;i<servers.size();i++){
        av.push(pair(servers[i],i));
    }
    int time=0;
    int ind=0;
    vector<int> res;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> unav;
    while (ind<tasks.size()){
        // cout<<time<<" "<<ind<<endl;
        while (!av.empty() && ind<=time && ind<tasks.size()){
            res.push_back(av.top().second);
            unav.push(pair(time+tasks[ind],av.top().second));
            av.pop();
            ind++;
        }
        if (av.empty()){
            time=unav.top().first;
        }
        else{
            time++;
        }
        while (!unav.empty() && unav.top().first==time){
            av.push(pair(servers[unav.top().second],unav.top().second));
            unav.pop();
        }
    }
    
    
    return res;
}
// vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
//     for(int i=0;i<servers.size();i++){
//         minh.push(pair(servers[i],i));
//     }
//     int time=0;
//     int ind=0;
//     vector<int> res;
//     unordered_map<int,vector<int>> d;
//     while (ind<tasks.size()){

//         cout<<time<<" "<<ind<<endl;
//         while (!minh.empty() && ind<=time && ind<tasks.size() ){
//             cout<<"inserted task "<<tasks[ind]<<" at "<<minh.top().first<<" "<<minh.top().second<<endl;
//             res.push_back(minh.top().second);
//             // q.push(pair(minh.top().second,time+tasks[ind]));
//             d[time+tasks[ind]].push_back(minh.top().second);
//             minh.pop();
//             ind++;
//         }
//         time++;
//         if (!d.empty() && d.find(time)!=d.end()){
//             // minh.push(pair(servers[q.front().first],q.front().first));
//             // q.pop();
//             for (int i:d[time]){
//                 minh.push(pair(servers[i],i));
//             }
//         }

//     }
//     return res;
// }

int main(){
    vector<int> s{5,1,4,3,2};
    vector<int> t{2,1,2,4,5,2,1};
    for (auto i:assignTasks(s,t)){
        cout<<i<<"  ";
    }
}