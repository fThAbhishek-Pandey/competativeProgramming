/* 
  Replace bits in N by M
  You are given  two 32-bits numbers N and M , and bits 
  position i and j .
  write a method to set all bits between i and j in N equal to M.
  M (becomes a substring of N locations at starting at j)
  Example
  N = 10,000,000,000
  M = 10101
  i=2 j=6
  output: 1001010100;
*/ 

#include<bits/stdc++.h>
using namespace std;
void clearBitsInRange (int &n , int i, int j){
	int a= (~0) <<(j+1);
	int b= (1<<i);
	int mask= a|b;
	n=n & mask;
}
void replaceBits (int &n, int i, int j, int m){
	clearBitsInRange(n, i,j);
	int mask= (m<<i);
	n |= mask;
}
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
       int n=15;
       int i=1;
       int j=3;
       int m=2;
       replaceBits(n,i,j,m);
       cout<<n<<endl;     
    }
	return 0;  
}