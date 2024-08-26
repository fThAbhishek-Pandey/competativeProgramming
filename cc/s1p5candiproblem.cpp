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
          for (int i=0;i<2*n;i++){
          	int ele ;
          	cin>>ele;
          	vec.push_back(ele);
          }
          bool flag = true;
          sort (vec.begin(),vec.end());
          int k =1;
          for (int i=1;i<2*n;i++){
          //  cout<<k<<" ";
                if (vec[i]==vec[i-1]) {
                	k ++;
                   // cout<<k<<" ";
                	if (k>1&&k%2!=0 ) {
                		flag = false;
                		break;
                	}
                }
                else k=1;
               // cout<<vec[i]<<" ";
          }
          if (flag) cout<<"yes"<<endl;
          else cout<<"no"<<endl;

    }
	return 0;  
}