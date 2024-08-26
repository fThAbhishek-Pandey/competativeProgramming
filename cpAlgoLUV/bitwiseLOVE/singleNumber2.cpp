#include<bits/stdc++.h>
using namespace std;
void printBi (int num){
   for (int i=31;i>=0;i--){
    cout<<  (1&(num>>i));
   }cout<<endl;
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up 
     int t;
     cin>>t;
     while (t--){
     	int n;
        cin>>n;
        vector<int> vec;
        for (int i=0;i<n;i++){
            int ele;
            cin>>ele;
            printBi(ele);
            vec.push_back(ele);
        }
 }
	return 0;
}