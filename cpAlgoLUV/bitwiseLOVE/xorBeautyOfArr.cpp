#include<bits/stdc++.h>
using namespace std;
long long const M= 1e9+ 7;
 int maximumXorProduct(long long a, long long b, int n) {
        long long ans=0;
         for (  long long i=0;i<(1<<n);i++){
            cout<<(((a^i)%M)* ((b^i)%M))%M<<endl;
            ans = max (ans,(((a^i)%M)* ((b^i)%M))%M);    
         }
        return ans;
    }
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up 
     int t;
     cin>>t;
     while (t--){
     	long long a,b;
     	cin>>a>>b;
        int x;
        cin>>x;
      cout<<maximumXorProduct(a,b,x)<<endl;
     	  
 }
	return 0;
}