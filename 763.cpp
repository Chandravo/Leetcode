//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string s) {
    vector<int> last(26,0);
    for (int i=0;i<s.size();i++){
        last[s[i]-97]=i;
    }       
    for (int i=0;i<last.size();i++){
        cout<<(char)(i+97)<<" "<<last[i]<<endl;
    }
    vector<int> res;
    int start=0;
    int curr=-1;
    for (int i=0;i<s.size();i++){
        if (i>curr && curr>=0){
            cout<<i<<" "<<curr<<endl;
            res.push_back(curr-start+1);
            start=i;
            curr=-1;
        }
        curr=max(curr,last[s[i]-97]);
    }
    cout<<"start = "<<start<<endl;
    if (s.size()-start!=0){
        res.push_back(s.size()-start);
    }
    return res;
}

int main(){
    for (int i:partitionLabels("caedbdedda")){
        cout<<i<<" ";
    }
}