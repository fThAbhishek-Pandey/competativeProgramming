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
           string str;
          
           cin>>n>>str;
           	char ch= ' ';
           	int last =0;
            int count=0;
            string curr= "";
           	vector<char> ans;
           for (int i = 0; i < n;i++)
           {
           	 	if (curr.back()&&curr.back()!= str[i]) {
                    ans.push_back(curr.back());
           	 		if(count>last){
           	 			ch   = str[i];
           	 			last = count;
           	 		}
                      curr = "" + str[i];
                      count =1;
                      break;
           	 	}
           	 	else{
           	 		count++;
                    curr += str[i];
           	 	}
           	 }
           int myans=0;
           if(ch=='1' ) {
              for(int i=0;i<ans.size();i++){
                  cout<<ans[i]<<endl;
                if(ans[i]=='1') myans++;
              }
           }
           else {
              for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<endl;
                if(ans[i] == '0') myans++;
              }
           }
            cout<<n<<" " <<myans<<endl;
    }
	return 0;  
}