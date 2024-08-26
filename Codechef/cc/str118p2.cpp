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
    		float p,l;
    		cin>>p>>l;
    		float k= l/p;
    		if (k>=0.75) cout<<"yes"<<endl;
    		else cout<<"no"<<endl;
    }
	return 0;  
}