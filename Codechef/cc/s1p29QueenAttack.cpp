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
              int n,x,y;
               cin>>n>>x>>y;
               int p,q;
               p=x-1,q=y-1;
               int count =0;
               count += min(x,y)-1;
                count += min (n-x,n-y);
                count += min(x-1, n-y);
                count += min(n-x, y-1);
               // while (p>0&&q>0){
               // 	     count ++;
               // 	     p--,q--;
               // }
               // p=x+1,q=y+1;
               // while (p<=n&&q<=n){
               // 	     count ++;
               // 	     p++,q++;
               // }
               // p=x-1,q=y+1;
               // while (p>0&&q<=n) {
               // 	     count++;
               // 	     p--,q++;
               // }
               // p=x+1,q=y-1;
               // while (p<=n&&q>0) {
               // 	count++;
               // 	p++,q--;
               // }
               count += 2*n- 2;
               cout<<count<<endl;

    }
	return 0;  
}