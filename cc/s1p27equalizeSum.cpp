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
    	    int a,b,x;
    	    cin>>a>>b>>x;
    	    int diff= abs (a-b);
             x *=2;
    	    if (diff%x==0) cout<<"yes"<<endl;
    	    else cout<<"no"<<endl;
    }
	return 0;  
}