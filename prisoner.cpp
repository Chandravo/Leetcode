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
    cout<<"percentage = "<<((double)net_wins/(double)t)*100<<"%"<<endl;
}