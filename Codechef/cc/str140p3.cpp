#include<bits/stdc++.h>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    while (t--){
           int n;
           cin>>n;
           int sum =0;
           int count  =0;
           vector<int> vec(n);
           for(int i=0;i<n;i++){
           	   cin>>vec[i];
           	   sum+= vec[i];
           	   
           }
           int sum2 = n*(n+1)/2;
           if ( sum > sum2 ) cout<<"no"<<endl;
           else cout<<"yes"<<endl;


    }
	return 0;  
}