//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
#define xxx 12
class stu{
    int marks;
    public:
    void getdata(){
        int x;
        cin>>x;
        marks=x;
        cout<<"hehe"<<endl;
    }
    int returnmarks(){
        return marks;
    }
};
int main(){
    stu arr[5];
    int s=0;
    
    
    for(int i=0;i<5;i++){
        // int temp;cin>>temp;
        arr[i].getdata();
        s+=arr[i].returnmarks();
    }
    s=s/5;
    cout<<s;
    

}