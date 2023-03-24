//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int res=0;

bool uniqueString(string &s){
    unordered_set<char> f;
    for (char i:s){
        if (f.find(i)!=f.end()) return false;
        f.insert(i);
    }
    return true;
}

void helper(vector<string> &arr, vector<bool> &check, short int start, int &len){
    // cout<<"len = "<<len<<endl;
    if (start>=arr.size()){
        // cout<<"Inside this shit len = "<<len<<endl;
        return;
    }
    for (short int i=start;i<arr.size();i++){
        bool uniq=true;
        for (char i:arr[i]){
            if (check[i-'a']){
                uniq=false;
                break;
            }            
        }
        bool us=uniqueString(arr[i]);
        if (us) {
            cout<<"arr[i] ka size "<<arr[i].size()<<endl;
            // res=max(res,(int)arr[i].size());
        }
        if (!uniq || !us) continue;
        for (char i:arr[i]){
            check[i-'a']=true;
        }
        len+=arr[i].size();
        // if (us) res=max(res,len);
        helper(arr,check,i+1,len);
        len-=arr[i].size();
        for (char i:arr[i]){
            check[i-'a']=false;
        }
    }
}

int maxLength(vector<string>& arr) {
    // if (arr.size()==1) return arr[0].size();
    vector<bool> check(26,false);
    int len=0;
    helper(arr,check,0,len);
    return res;
}

int main(){
    vector<string> arr{"jnfbyktlrqumowxd","mvhgcpxnjzrdei"};
    // cout<<arr[0].size()<<" "<<arr[1].size()<<endl;
    cout<<maxLength(arr)<<endl;
}