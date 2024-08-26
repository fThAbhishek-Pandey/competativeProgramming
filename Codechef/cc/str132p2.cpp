#include<bits/stdc++.h>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    while (t--){
          int n;
          cin>>n;
          vector<int>nums(n);
          for(int i=0;i<n;i++){
          	cin>>nums[i];
          }
          int sum =0;
          	for(int i=0;i<n;i++){
          		  int curr =0;
                int count =0;
          		for (int j=i;j<n;j++){
          			 curr += nums[i];
                     if ( curr%2==0) {
                	if(sum<curr) sum =count;
                }
                count ++;
          		}
          		if ( curr%2==0) {
                	if(sum<curr) sum =count;
                }
               
          	}
          	cout<<sum<<endl;
    }
	return 0;  
}