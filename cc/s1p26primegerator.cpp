#include<bits/stdc++.h>
using namespace std;
bool PrimeTest(int N)
{
    for (int i = 2; i*i <= N; ++i)
    {
        if(N%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	// Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    while (t--){
               int a,b;
               cin>>a>>b;
               for (int i=a;i<=b;i++){
               	      
               	       if (i!=1&&PrimeTest(i))  cout<<i<<endl;
               }
               cout<<endl;
    }
	return 0;  
}