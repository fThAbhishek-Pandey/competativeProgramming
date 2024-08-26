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
            cout<<n-1<<" "<<n-2<<" ";
            for (int i = 1; i<= n-3;i++){
            	cout<<i<<" ";

            }
            cout<<n<<endl;
    }
	return 0;  
}