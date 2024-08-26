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
            int count0=0,count1=0;
            for (int i=0;i<n;i++){
            	int ele;
            	cin>>ele;
            	if (ele%2==0) count0++;
            	else count1++;
            }
            if (count1%2==0) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
    }
	return 0;  
}