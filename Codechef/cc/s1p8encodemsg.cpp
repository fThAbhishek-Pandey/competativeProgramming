#include<bits/stdc++.h>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	// Never Give Up,  manzil dur nhi hai
    int t ;
    cin>>t;
    while (t--){
           int n;
           cin>>n;
           string str;
           cin>>str;
           for (int i=0;i<n-1;i+=2){
           	      swap (str[i],str[i+1]);
           } 
           for (int i=0; i<n; i++){
           	
           	str[i] = 'z' -str[i] +'a';
           }
           cout<<str<<endl;
    }
	return 0;  
}