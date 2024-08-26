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
             vector<int>mn;
             for (int i=0;i<n;i++){
             	int ele;
             	cin>>ele;
             	mn.push_back(ele);
             }
             string s="";
             int i=0;
             while (k>=0&&i<mn.size()){
             		if (k>=mn[i]){
             			 s +='1';
             			 k -= mn[i];
             		}
             		else {
             			s+= '0';
             		}
             		i++;
             }
             cout<<s<<endl;
    }
	return 0;  
}