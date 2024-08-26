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
        vector<int> b;
        for (int i=0; i<n;i++){
             int ele;
             cin>>ele;
             b.push_back(ele);
        }
        int  f1 ,f2;
        f1= f2=0;
        for (int i =0; i<n-1; i++){
            f2 = (f2+b[i])%2;
        }
        f1 = (f1+f2)%2;
        if (f1==b.back()) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
	return 0;  
}