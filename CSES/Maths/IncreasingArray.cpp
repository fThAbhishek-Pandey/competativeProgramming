#include<bits/stdc++.h>
using namespace std;
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
         vector<int> arr;
         for(int i=0; i<n; i++){
         	int ele;
         	cin>>ele;
         	arr.push_back(ele);

         }  
         int count=0;
         for(int i=0; i< n; i++){
         	    int maxi = arr[i];
         		int idx =i;
         	for(int j=i+1; j<n; j++){

         		if(maxi > arr[j]){
         			maxi = arr[j] ;
         			idx = j;
         			
         		}
         		
         	}
         	if (idx !=i ){
         		count++;
         		swap(arr[i], arr[idx]);
         	}
         }

         cout<<count<<endl;
         for (int i = 0; i < n; ++i){
         	cout<<arr[i]<<" ";
         }
         
    }
	return 0;  
}