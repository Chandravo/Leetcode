//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// code likhna start kr do mai ek ek comment daalke samjha rha
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        // yahan hum pair me temperature and index store kr rhe hai
        // bas isko vector ki jagah put stack
        stack<pair<int,int>> a; // here is stack now
        // s ek temporary pair hai
        pair<int,int> s;
        for (int i=0;i<temperatures.size();i++){
            // jab bhi agle index pe ja rhe, hum yeh check kr rhe hai ki yeh previous ..
            // ... elements jo abhi a stack me hai kitne se bada hai
            // agr bada hai to result vector me daal denge, aur a se pop out kr denge
            // basically a stack holds the elements for which a higher temperature...
            // ... has not been found
            while (a.size()!=0 && temperatures[i]>a.top().first){
                // is loop me yehi check kr rhe hai ki kitne previous elements se ...
                // ...bada temp mil gya
                res[a.top().second]=i-a.top().second;
                a.pop();
            }
            s.first=temperatures[i];
            s.second=i;
            // intereting point : a stack humesha sorted rhega kyuki hum tbhi elements
            // ... daal rhe hai when a greater element of its previous element is 
            // ... not found
            // so it is monotonic stack
            a.push(s);
        }
        //time complexity & space complexity : O(n)
        return res;
    }
};

int main(){
    
}