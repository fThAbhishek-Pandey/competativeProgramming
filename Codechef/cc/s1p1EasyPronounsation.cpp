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
            int n;
            cin>>n;
            string str;
            cin>>str;
            int count =0;
            int flag = true;
             vector<char> vov= {'a','e','i','o','u'};
            for (int i=0; i<n;i++){
                  if (find(vov.begin(),vov.end(), str[i])==vov.end()){
                   count ++;
                   if (count>=4){
                        flag= false;
                        cout<<"no"<<endl;
                        break;
                   }
                  }
                  else count =0;
            }
            if (flag) cout<<"yes"<<endl;
    }
	return 0;  
}