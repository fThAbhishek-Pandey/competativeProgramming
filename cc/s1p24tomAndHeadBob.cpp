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
    	     int county=0,countn=0,countI=0;
    	     for (int i=0;i<n;i++){
    	     	 if (str[i]=='Y' ) county++;
    	     	 else if (str[i]=='N') countn++;
    	     	 else if (str[i]=='I') countI++;
    	     }
    	     if (countI>0) cout<<"INDIAN"<<endl;
    	     else if (county>0) cout<<"NOT INDIAN"<<endl;
    	     else cout<<"NOT SURE"<<endl;
    }
	return 0;  
}