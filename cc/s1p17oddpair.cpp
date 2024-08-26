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
    	 int n;
    	 cin>>n;
    	 int even = n/2;
    	 int odd = n/2;
    	 if (n&1) odd= n/2 +1;
    	 cout<<even*odd*2<<endl;
    }
	return 0;  
}