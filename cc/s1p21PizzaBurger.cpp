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
         if (x>y ) cout<<"PIZZA"<<endl;
         else if (x>z) cout<<"BURGER"<<endl;
         else cout<<"NOTHING"<<endl;
    }
	return 0;  
}