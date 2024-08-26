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
              string s1,s2;
              cin>>s1>>s2;
              int count0=0, count1=0;
              for (int i=0;i<n;i++){
              	    if (s1[i]=='0') count0++;
              	    else count1++;
              	    if (s2[i]=='0') count0--;
              	    else count1--;
              }
              if (count0==0&&count1==0) cout<<"yes"<<endl;
              else cout<<"no"<<endl;


          //     int i=0,j=-1,k=-1;
          //     while (i<n){
          //     	   if (s1[i]==s2[i]) i++;
          //     	   else {
          //     	   	      if (j== -1) j= i++;
          //     	   	      else if (k==-1) k=i++;
          //     	   	      else {
          //     	   	      	  // cout<<"no"<<endl;
          //     	   	      	   break;
          //     	   	      }
          //     	   }
          //     }
          //     if (j==-1&&k==-1) cout<<"yes"<<endl;
          //     else if (k==-1) cout<<"no"<<endl;
          //    else  if (i==n){
          //     string sb1 = s1.substr (j,k-j+1);
          //     string sb2 = s2.substr (j,k-j+1);
          //     reverse(sb2.begin(),sb2.end());
          //     if (sb1==sb2) cout<<"yes"<<endl;
          //     else cout<<"no"<<endl;
          // }
          //  else cout<<"no"<<endl;
    }
	return 0;  
}