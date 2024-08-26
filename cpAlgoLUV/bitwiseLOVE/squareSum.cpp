#include<bits/stdc++.h>
using namespace std;
long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> num(nums1.size());
        for(int i=0;i<nums1.size();i++){
             num[i]= abs(nums1[i]-nums2[i]);
        }
         k1+= k2;
        while (k1--){
            auto mini = max_element (num.begin(),num.end());
          //  mini = max_element (num.begin(),num.end());
            int idx = distance(num.begin(),mini);
           if (num[idx]>0) num[idx]--;
        }
        long long sum=0;
        for(int i=0;i<num.size();i++){
            sum += num[i]*num[i]; 
        }
        return sum;
    }
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up,  manzil dur nhi hai
     int t;
     cin>>t;
     while (t--){
     	int n ;
     	cin>>n;
     	vector<int> vec;
     	for(int i=0;i<n;i++){
     		int ele;
     		cin>>ele;
     		vec.push_back(ele);
     		
     	}
     }
	return 0;
}