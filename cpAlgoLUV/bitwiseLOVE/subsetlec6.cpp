#include<bits/stdc++.h>
using namespace std;
void genrate (vector<int> &subset,int i,vector<int>& nums,vector<vector<int>> & ans){
       if (i==nums.size()){
           ans.push_back(subset);
           return;
       }
       genrate(subset,i+1,nums,ans);
       subset.push_back(nums[i]);
       genrate(subset,i+1,nums,ans);
       subset.pop_back();
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subs;
        genrate (subs,0,nums,ans);
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
        for (int i = 0; i < n; ++i)
        {
        	int ele;
        	cin>>ele;
        	vec.push_back(ele);
        }
     
     vector<vector<int>> ans= subsets(vec);
     for (int i = 0; i < ans.size(); ++i)
     {
     	for (int j = 0; j < ans[i].size(); ++j)
     	{
     		cout<<ans[i][j]<<" ";
     	}
     	cout<<endl;
     }
 }
	return 0;
}