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
           vector<int> vec;
           for (int i=0;i<n;i++){
           	  int ele;
           	  cin>>ele;
           	  vec.push_back(ele);
           }  
           sort (vec.begin(), vec.end());
           int mx = -1;
           int count =1;
           for (int i=1; i<n;i++){
                  if (vec[i]==vec[i-1]) count++;
                  else {
                  	   mx = max (mx, count);
                  	   count=1;
                  }
           }
           mx = max(mx,count);
           cout<<n-mx<<endl;
    }
	return 0;  
}