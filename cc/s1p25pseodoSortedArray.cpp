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
           for (int i = 0; i < n; ++i)
           {
           	   int ele;
           	   cin>>ele;
           	   vec.push_back(ele);
           }
           int count =0;
           for (int i=0;i<n-1;i++){
           	int k=i;
           	   while (vec[k]>vec[k+1]) {
           	   	count++;
           	   	swap (vec[k],vec[k+1]);
           	   	k--;
           	   }

           }
           if (count <=1) cout<<"yes"<<endl;
           else cout<<"no"<<endl;

    }
	return 0;  
}