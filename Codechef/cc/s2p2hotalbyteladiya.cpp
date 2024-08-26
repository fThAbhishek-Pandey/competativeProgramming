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
    			
    			vector<pair<int,int>>arv;
    			for (int i=0;i<n;i++){
                     int ele;
                     cin>>ele;
                     arv.push_back(make_pair(ele,1));
                  }
                for (int i=0;i<n;i++){
                     	int ele;
                     	cin>>ele;
                     	arv.push_back(make_pair(ele, 0));
                   }
                   sort (arv.begin(),arv.end());
                 int ans =0, count=0;
    			for (auto ele :  arv){
    				if (ele.second==1) count++;
    				else count--;
                    ans = max(ans, count);
    			}
    			cout<<ans<<endl;
    }
	return 0;  
}