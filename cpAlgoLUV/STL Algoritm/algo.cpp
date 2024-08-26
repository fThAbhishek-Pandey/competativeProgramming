#include<bits/stdc++.h>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up 
     int t;
     cin>>t;
     while (t--){
     	vector<int> vec;
     	int n;
     	cin>>n;
     	for(int i= 0;i< n;i++){
           int ele;
           cin>>ele;
           vec.push_back(ele);
     	}
     	int mini = *min_element(vec.begin(),vec.end());
           cout<<"the minimum min_element is : "<<mini<<endl;
           int maxi = *max_element(vec.begin(),vec.end());
           cout<<"the maximum element is : "<<maxi<<endl;
       int sum = accumulate(vec.begin(),vec.end(),0);
       cout<<"the total number of sum : "<<sum<<endl;
       int ct= count(vec.begin(),vec.end(),3);
       cout<<"the freq of 3 is "<<ct<<endl;
       auto it = find(vec.begin(),vec.end(),2);
       if (it!=vec.end()) cout<<" 2 is present "<<endl;
       else cout<<"2 is absent"<<endl;
       reverse(vec.begin(),vec.end());
       for(auto ele: vec){
        cout<<ele<<" ";
       }
     }

	return 0;
}