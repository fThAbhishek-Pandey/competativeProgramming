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
    		vector<int> arival;
    		vector<int> depa;
    		for (int i = 0; i < n; ++i)
    		{
    			int ele;
    			cin>>ele;
    			arival.push_back(ele);
    		}
    		for (int i = 0; i < n; ++i)
    		{
    			int ele;
    			cin>>ele;
    			depa.push_back(ele);
    		}
        
            vector<int> day(1007,0);
             for (int i=0;i<n;i++){
             	
             	for (int j=arival[i];j<depa[i];j++){
             		day[j]++;
             	}
       
             }
             int ans=0;
             int mx =0;
             for (int i = 0; i < 1007; ++i)
             {
             	ans = max(ans, day[i]);
             }
             cout<<ans<<endl;
    }
	return 0;  
}