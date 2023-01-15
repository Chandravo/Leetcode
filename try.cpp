#include <bits/stdc++.h>
using namespace std;

long long chefAndPizza(vector<long long> arr, int pizzas) {
    unordered_map<int,pair<int,int>> time;
    while (pizzas!=0){
        int i=0;
        while (pizzas!=0 && i<arr.size()){
            int new_time=0;
            if (i==0){
                int piz=time[arr[i]].first;
                piz++;
                new_time=piz*piz-piz+1;
                time[arr[i]]=pair(piz,new_time);
                pizzas--;
            }
            else{
                int rnk=arr[i];
                int curr_pizz=time[rnk].first;
                curr_pizz++;
                int nt=rnk*(curr_pizz*curr_pizz-curr_pizz+1);
                if (nt<=new_time){
                    time[rnk]=pair(curr_pizz,nt);
                    pizzas--;
                } 
                else break;
            }
            i++;

        }
    }
    return time[arr[0]].second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k, t, a, b, c, d;
    t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> A(m);
        for ( int i = 0; i < m; i++) {
            cin >> A[i];

        }
        sort(A.begin(),A.end());
        long long  ans = chefAndPizza(A, n);
        cout << ans << endl;
    }

}