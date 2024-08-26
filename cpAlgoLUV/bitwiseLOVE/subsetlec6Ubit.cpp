#include<bits/stdc++.h>
using namespace std;
void printBi (int num){
   for (int i=31;i>=0;i--){
    cout<<  (1&(num>>i));
   }cout<<endl;
}
 vector<vector<int>> subset (vector<int> & nums){
   int n= nums.size();
   int subset_ct = (1<<n);
   vector<vector<int>> ans;
   for ( int mask =0;mask<subset_ct;++mask){
      vector<int>sub;
      for (int i=0;i<n;i++){
         if ((mask&(1<<i))!=0){
            sub.push_back(nums[i]);
         }
      }
      ans.push_back(sub);
   }
   return ans;
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
            //printBi(ele);
            vec.push_back(ele);
        }
        vector<vector<int>> ans= subset(vec);
        for (int i=0;i<ans.size();i++){
         for (int j=0;j<ans[i].size();j++){
              cout<<ans[i][j]<<" ";
         }
         cout<<endl;
        } 
 }
	return 0;
}