#include<bits/stdc++.h>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	// Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    while (t--){
    	   int n,m;
    	   cin>>n>>m;

    	   if (n%2==0) n/=2;
    	   else  n = n/2 +1;
    	   if (m%2==0) m /=2;
    	   else m= m/2+1;
    	   cout<<m*n<<endl;
    }
	return 0;  
}