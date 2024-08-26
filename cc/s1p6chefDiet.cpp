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
           int n,k;
           cin>>n>>k;
           vector<int> vec;
           for (int i=0; i<n; i++){
           	int ele;
           	cin>>ele;
           	vec.push_back(ele);
           }
           bool flag = true;
           int store =0;
           for (int i=0; i<n;i++){
           	store += vec[i];
           	 if (store >=k) {
                   store -= k;
           	 }
           	 else {
           	 	  flag = false;
           	 	  cout<<"no "<<i+1<<endl;
           	 	  break;
           	 }
           }
           if (flag ) cout<<"yes"<<endl;
    }
	return 0;  
}