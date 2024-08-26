#include<bits/stdc++.h>
using namespace std;
int mindiff (string s1 , string s2){
	// cout<<s1<<" "<<s2<<endl;
	  int count = 0;
	  for(int i=0;i<s1.size();i++){
	  		if(s1[i]!=s2[i]) count++;
	  }
	  return count;
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    while (t--){
           int n,m;
           cin>>n>>m;
           string s1,s2;
           cin>>s1>>s2;
           int ans = n;
           for(int i=0;i<n;i++){
               int mindiffs= n;
               int k= i+m-1;
               // cout<<k<<" ";
               if (k <n) mindiffs = mindiff(s1.substr(i,m),s2);
               ans = min(mindiffs,ans);
           }
           cout<<ans<<endl;
    }
	return 0;  
}