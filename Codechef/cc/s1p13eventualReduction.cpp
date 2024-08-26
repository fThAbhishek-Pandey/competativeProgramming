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
           vector<int> vec(26,0);
           for (int i=0;i<n;i++){
                   vec[str[i]-'a']++;
           }
           bool flag= true;
           for (int i=0;i<26;i++){
           	     if (vec[i]%2!=0) {
           	     	flag= false;
           	     	break;
           	     }
           }
           if (flag) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
    }
	return 0;  
}