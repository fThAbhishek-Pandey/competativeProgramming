#include<bits/stdc++.h>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	// Never Give Up,  manzil dur nhi hai
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
    		int n;
    		cin>>n;
    		int k;
    		cin>>k;
    		vector<int> vec1;
    		vector<int> vec2;
    		for (int i=0;i<n;i++){
                   int ele;
                   cin>>ele;
                  if (i%2==0) vec1.push_back(ele);
                  else vec2.push_back(ele);
    		}
    		 sort(vec1.begin(), vec1.end());
    		 sort(vec2.begin(), vec2.end());
    		 int i=vec1.size()-1, j=0;
    		 while (k--){
    		 	if (i>0&&j<vec2.size()) swap(vec1[i], vec2[j]);
    		 		 i--,j++;
    		 }
    		int m=0,t=0;
    		for (int i=0; i<vec1.size();i++){
    			m+= vec1[i];
    		}
    		for (int i=0; i<vec2.size();i++){
    			t+= vec2[i];
    		}

    		if (t> m) cout<<"yes"<<endl;
    		else cout<<"no"<<endl;
    }
	return 0;  
}