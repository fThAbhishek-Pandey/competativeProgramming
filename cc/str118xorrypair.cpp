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
    		   int x;
    		   cin>>x;
    		    int diff= INT_MAX;
    		    int count=0;
    		   for (int i=0,j=x;i <= j;i++,j--){
    		   		int k = i^j;
    		   		if (k==x) {
    		   			int k= j-i;
    		   	      if (diff>k)  count++;
    		   	      
    		   		}
    		   }
    		   cout<<count<<endl;

    }
	return 0;  
}