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
           string str;
           cin>>str;
           if(str.size()<= 1){
           	 cout<<str.size()<<endl;
           	 return 0;
           }
           int count =1;
           int ans=0;
           for(int i=1; i< str.size();i++){
           	   if( str[i-1]== str[i]) count++;
           	   else {
           	   	  ans = max(ans, count);
           	   	  count=1;
           	   }
           }
           ans = max(ans, count);
           cout<<ans<<endl;
    }
	return 0;  
}