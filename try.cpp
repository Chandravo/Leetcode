#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while (t--){
	    int n;cin>>n;
	    vector<int> v(n),v2(n);
	    for (int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    v2[0]=0;
	    for (int i=1;i<n;i++){
	        v2[i]=v2[i-1]+v[i-1]-v[i];
	    }
        for (int i:v2) cout<<i<<" ";
        cout<<endl;
	    int res=0;
	    for (int i=0;i<n;i++){
	        for (int j=i+1;j<n;j++){
	            if (v2[j]!=(v[j]-v[i])) res++,cout<<i<<" "<<j<<endl;;
	        }
	    }
	    cout<<res<<endl;
	    
	}
	
	return 0;
}
