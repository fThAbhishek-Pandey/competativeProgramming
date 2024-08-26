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
           int n,m;
           cin>>n>>m;
           vector<int> vec;
           for (int i=0;i<n;i++){
           	   int ele;
           	   cin>>ele;
           	   vec.push_back(ele);
           }
           int count =0;
           int sum =0;
           for (int i=0;i<n;i++){
           	   sum+= vec[i];
           	   if(sum>=m) {
           	   	count ++;
           	   	sum=0;
           	   }
           }
            if(sum>=m) count ++;
            cout<<count<<endl;
           	   	

    }
	return 0;  
}