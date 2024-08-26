#include<bits/stdc++.h>
using namespace std;

  bool custCmp (vector<int> &v1,vector<int>&v2){
     return v1[1]<v2[1];
 }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort (intervals.begin(),intervals.end(),custCmp);
        for (int i=0;i<intervals.size();i++){
            for (int j=0;j<intervals[i].size();j++){
                cout<<intervals[i][j]<<" ";
            }
            cout<<" --> ";
        }
        cout<<endl;
        int last=0;
        int count=0;
        for (int i=0;i<intervals.size();i++){
            if (intervals[last][1]> intervals[i][0]){
                cout<<intervals[last][1]<<" "<<intervals[i][0]<<endl;
                count++;
            } 
            else  last =i;
           
        }
        return count;
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
        vector<vector<int>> vec;
     	for (int i=0;i<n;i++){
            vector<int> helper(2);
                for (int j=0;j<2;j++){
                    cin>>helper[j];
                }
                vec.push_back(helper);
        }
     cout<<"remoded interval is : "<<eraseOverlapIntervals(vec)<<endl;
 }
	return 0;
}