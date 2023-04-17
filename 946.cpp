//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    int i=0,j=0;
    stack<int> st;
    while (i<pushed.size() || !st.empty()){
        if (i==pushed.size() && st.top()!=popped[j]) return false;
        else if (!st.empty() && st.top()==popped[j]){
            st.pop();
            j++;
        }
        else{
            st.push(pushed[i]);
            i++;
        }

    }        
    return true;
}

int main(){
    
}