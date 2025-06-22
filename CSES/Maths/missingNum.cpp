#include<bits/stdc++.h>
using namespace std;
int main () {
    // #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif 
	// ios_base::sync_with_stdio(false);
    // cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
    int t=1;
    // cin>>t;
    while (t--){
          int n;
          cin>>n;
          int ans=0;
          for(int i=1; i< n; i++){
          	int ele;
          	cin>>ele;
          	ans ^= i^ele;
          } 
          ans ^= n;
          cout<<ans<<endl;

    }
	return 0;  
}