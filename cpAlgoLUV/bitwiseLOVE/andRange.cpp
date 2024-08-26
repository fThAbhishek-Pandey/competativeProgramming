#include<bits/stdc++.h>
using namespace std;
  int rangeBitwiseAnd(int left, int right) {
        int ans=left;
        for(int i=left+1,j= right;i<j;i++,j--){
            ans &=(i&j);
        }
        return ans;
    }
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up,  manzil dur nhi hai
     int t;
     cin>>t;
     while (t--){
     	int l,r;
     	cin>>l>>r;
     	cout<<rangeBitwiseAnd(l,r)<<endl;
     }
	return 0;
}