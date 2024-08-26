
#include<bits/stdc++.h>
using namespace std;
void print_binary (int num){
	for (int i=31;i>=0;--i){
		cout<<((num>>i)&1);
	}
	cout<<endl;
}
void setbitcheck(int num,int pos){
     if (0!=(num& (1<<pos))) cout<<"set bit at "<<pos<<"th bit \n";
     else cout<<"not a set bit at "<<pos<<"th bit \n";
}
void setBit (int &num , int pos){
	   num= num| (1<<pos);
}
void unSetbit (int & num,int pos){
	num= num & (~(1<<pos));
}
void toggleBit (int &num ,int pos){
	num = num ^ (1<<pos);
}
int countSetBit (int num){
	int count =0;
	for (int i=31;i>=0;i--){

		if ((num&(1<<i))!=0) count ++;
	}
	return count;
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up 
	int a=9;
	print_binary(a);
     setbitcheck(a,2);
     setBit(a,2);
     print_binary(a);
     setbitcheck(a,2);
     print_binary(a);
     unSetbit(a,2);
     setbitcheck(a,2);
     print_binary(a);
     setbitcheck(a,1);

     toggleBit(a,1);
     setbitcheck(a,1);
     print_binary(a);
     setbitcheck(a,3);
     toggleBit(a,3);
     setbitcheck(a,3);
     print_binary(a);
     cout<<"number of set bit : "<<countSetBit(a)<<endl;
     cout<<"number of set bit : "<<__builtin_popcount(a)<<endl;
     cout<<"number of set bit : "<<__builtin_popcountll(a)<<endl;

	 return 0;
}