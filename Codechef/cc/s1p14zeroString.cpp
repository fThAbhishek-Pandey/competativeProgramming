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
    		string str;
    		cin>>str;
    		int count0=0;
    		int count1= 0;
    		for (int i=0;i<n;i++){
    			 if (str[i]=='0') count0++;
    			 else count1++;
    		}
    		if (count1==0) cout<<0<<endl;
    		else if (count0==count1) cout<<count1<<endl; 
    		else if (count0>count1) cout<<count1<<endl;
    		else cout<<count0+1<<endl;	
    }
	return 0;  
}