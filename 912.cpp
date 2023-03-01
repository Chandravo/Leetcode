//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int cnt=0;
auto create_subarrays(vector<int> &arr){
    int n=arr.size();
    vector<vector<int>> vec;
    int i=0;
    while (i<n){
        vector<int> v1;
        v1.push_back(arr[i]);
        while (++i<n && arr[i]>=v1.back()){
            v1.push_back(arr[i]);
        }
        vec.push_back(v1);
    }
    for (int i=0;i<vec.size();i++){
        for (int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return vec;
}

vector<int> merge_subarrays(vector<int> &arr,vector<vector<int>> &vec){
    int n=arr.size();
    vector<int> res;
    int i=0;
    while (vec[vec.size()-1].size()!=n){
        // vector<int> v1=vec[i];
        // vector<int> v2=vec[i+1];
        // vector<int> v3;
        int k=0,j=0;
        while (k<vec[i].size() && j<vec[i+1].size()){
            if (vec[i][k]<=vec[i+1][j]){
                res.push_back(vec[i][k]);
                k++;
            }
            else{
                res.push_back(vec[i+1][j]);
                j++;
            }
            cnt++;
        }
        while (k<vec[i].size()){
            res.push_back(vec[i][k]);
            k++;
        }
        while (j<vec[i+1].size()){
            res.push_back(vec[i+1][j]);
            j++;
        }
        i+=2;
        vec.push_back(res);
        res={};
    }
    // res=vec[vec.size()-1];
    // for(int m=0;m<n;i++){
    //     arr[m]=res[m];
    // }
    return vec[vec.size()-1];
    
}
vector<int> sortArray(vector<int>& arr) {
    auto vec=create_subarrays(arr);
    return merge_subarrays(arr,vec);
    
}

int main(){
    vector<int> arr{-4,0,7,4,9,-5,-1,0,-7,-1};
    for (int i:sortArray(arr)) cout<<i<<" ";
}