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
            int a,b,c;
            cin>>a>>b>>c;
            if (a>50)cout<<"A"<<endl;
            else if (b>50)cout<<"B"<<endl;
           else if (c>50)cout<<"C"<<endl;
            else cout<<"NOTA"<<endl;
    }
	return 0;  
}