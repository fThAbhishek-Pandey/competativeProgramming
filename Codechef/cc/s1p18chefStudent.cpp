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
    	string str;
    	cin>>str;
    	int n= str.size();
    	//cout<<str<<endl;
    	for (int i=0; i<n;i++){
    			if (str[i]=='<') str[i]=  '>';
    			else if (str[i]=='>') str[i] = '<';
    	}
    	//cout<<str<<endl;
    	int count =0;
    	for (int i=0; i <n-1;i++){
    		    if (str[i]=='>'&&str[i+1]=='<') count ++;
    	}
    	cout<<count<<endl;
    }
	return 0;  
}