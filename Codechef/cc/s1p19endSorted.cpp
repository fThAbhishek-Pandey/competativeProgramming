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
    		for (int i=0; i<n;i++){
    			int ele;
    			cin>>ele;
    			vec.push_back(ele);

    		}
    		int idx1 = find (vec.begin(),vec.end(),1)- vec.begin();
    		//cout<<idx1<<endl;
    		int count =0;
    		while (idx1>0){
    			swap (vec[idx1],vec[idx1-1]);
    			count++;
    			idx1--;
    		}
    		int idxn = find (vec.begin(),vec.end(),n)- vec.begin();
    		while (idxn<n-1){
    			swap(vec[idxn],vec[idxn+1]);
    			count ++;
    			idxn++;
    		}
    		cout<<count<<endl;
    }
	return 0;  
}