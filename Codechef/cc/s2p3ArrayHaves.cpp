#include<bits/stdc++.h>
using namespace std;
int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
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
             vector<int>vec;
             for (int i=0;i<2*n;i++){
                 int ele ;
                 cin>>ele;
                  vec.push_back(ele);
             }
             long long cnt =0;
             long long ans= 0;
             for (int i=0; i<n*2;i++){
              if (vec[i]>n) cnt++;
              else ans += cnt;
             }
             cout<<ans<<endl;

    }
	return 0;  
}