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
            // int k= n%10;
            // if (k!=9) n++;
            // else n+=2;
            int ds =0;
            int k= n;
            while (k){
            	ds += k%10;
            	k/=10;
            }
            k= n+1;
            int ds2=0;
            while (k){
            	ds2 += k%10;
            	k/=10;
            }
            if ((ds%2) != (ds2%2))
            cout<<n+1<<endl; 
            else cout<<n+2<<endl;    
    }
	return 0;  
}