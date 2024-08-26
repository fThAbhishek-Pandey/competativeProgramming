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
            int dsa1,toa1, dm1,dsa2,toa2,dm2;
            cin>>dsa1>>toa1>>dm1;
            cin>>dsa2>>toa2>>dm2;
            int sum1 = dsa1+toa1+dm1;
            int sum2 = dsa2+toa2+dm2;
            if (sum1>sum2) cout<<"DRAGON"<<endl;
            else if (sum1<sum2) cout<<"SLOTH"<<endl;
            else {
            	if (dsa1>dsa2) cout<<"DRAGON"<<endl;
            	else if (dsa1<dsa2) cout<<"SLOTH"<<endl;
            	else {
            		if (toa1>toa2) cout<<"DRAGON"<<endl;
            		else if (toa1<toa2) cout<<"SLOTH"<<endl;
            		else {
            			cout<<"tie"<<endl;
            		}
            	}
            }

    }
	return 0;  
}