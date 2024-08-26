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
    		int a,b;
    		cin>>a>>b;
    		int i=1;
    		int eatA=0,eatB=0;
    		while (a>=0&&0<=b){
    			if (i&1) {
    				a-=i;
    				if (0>a ) {
    					cout<<"Bob"<<endl;
    				}
    			}
    			else {
    				b-=i;
    				if (b<0) cout<<"Limak"<<endl;
    			}
    			i++;           
    		}
    }
	return 0;  
}