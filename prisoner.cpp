//This code is made by Chandravo Bhattacharya
// https://www.youtube.com/watch?v=iSNsgj1OCLA
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the number of prisoners ";
    int n;cin>>n;
    cout<<"enter the number of iterations ";
    int t;cin>>t;
    vector<int> box(n+1);
    // adding a 0 at 0 index to make the effective indexes range from 1 to n
    box[0]=0;
    for (int i=1;i<=n;i++){
        box[i]=i;
    }
    int test=t;
    long long net_wins=0;
    while (test--){
        //making a random shuffle of box each time 
        vector<int> temp=box;
        auto rd = std::random_device {}; 
        auto rng = default_random_engine {rd()};
        shuffle(temp.begin()+1, temp.end(), rng);
        // vector<int> temp{0, 84, 44, 83, 55, 11, 51, 62, 48, 64, 85, 41, 5, 39, 71, 81, 12, 63, 32, 58, 13, 67, 89, 36, 3, 10, 93, 72, 29, 38, 27, 2, 7, 59, 88, 74, 99, 79, 17, 80, 25, 94, 46, 91, 61, 16, 33, 69, 65, 87, 76, 66, 15, 40, 34, 26, 45, 23, 19, 100, 73, 56, 54, 47, 98, 75, 20, 22, 31, 70, 77, 30, 95, 42, 92, 68, 37, 52, 78, 90, 28, 53, 60, 4, 1, 24, 9, 8, 18, 96, 57, 43, 86, 82, 21, 97, 6, 49, 14, 35, 50};
        // for (int i:temp) cout<<i<<", ";
        // cout<<endl;
        int wins=0;
        int flag=0;
        for (int i=1;i<=n;i++){
            flag=0;
            int j=n/2;
            int currno = temp[i];
            while (j--){
                // cout<<"i = "<<i<<", currno = "<<currno<<endl;
                if (i==currno){
                    flag=1;
                    break;
                }
                currno=temp[currno];
            }
            if (flag==1){
                wins++;
            }
            else {
                break;
            }
        }
        // cout<<"wins = "<<wins<<endl;
        // cout<<"No of wins "<<wins<<endl;
        if (wins==n) net_wins++;
        cout<<"test "<<t-test<<" done"<<endl;
    }
    cout<<endl<<endl;
    // double avg = (double)net_wins/(double)t;
    // cout<<"average escapes = "<<avg<<endl;
    cout<<"percentage = "<<((double)net_wins/(double)t)*100<<"%"<<endl;
}