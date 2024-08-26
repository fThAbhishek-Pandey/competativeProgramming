#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
bool f(int i=0, int j=0){

}
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
         
           for (int i = 0; i < n; ++i)
           {
           	 int ele;
           	 cin>>ele;
           	 arr.push_back(ele);
           }
           int count=0;
           for(int i=0;i<n;i++){
           	 for (int j=i;j<n;j++){
           	 	 if(f()) count++;
           	 }
           }
    }
	return 0;  
}