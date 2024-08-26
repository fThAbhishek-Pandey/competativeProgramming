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
    	  int x,y,z;
    	  cin>>x>>y>>z;
    	  if (x+y== z) cout<<"yes"<<endl;
    	  else if (y+z==x) cout<<"yes"<<endl;
    	  else if (x+z==y)  cout<<"yes"<<endl;
    	  else cout<<"no"<<endl;

    }
	return 0;  
}