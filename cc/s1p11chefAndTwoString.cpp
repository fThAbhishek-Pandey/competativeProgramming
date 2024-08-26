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
          string s1,s2;
          cin>>s1>>s2;
          int n= s1.size();
          int strongM=0,strongMM=0;

          for (int i=0;i<n;i++){
               if (s1[i]!= '?'&&s2[i]!= '?') {
               	  if (s1[i]==s2[i]) strongM++;
               	  else strongMM++;
               }
          }  
          cout <<strongMM<<" "<<n-strongM<<endl; 
    }
	return 0;  
}