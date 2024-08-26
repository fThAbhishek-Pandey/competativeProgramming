#include<bits/stdc++.h>
using namespace std;
void printBi (int num){
	for (int i=31;i>=0;i--){
		cout<<(1&(num>>i));
	}
	cout<<endl;
}
void checkEvenOdd (int num){// even number has 0th  0, and odd for 1;
  if (num&1) cout<<"even";
  else cout<<"odd";
}
void multiplyby2 (int num){
	cout<<num<<" --> ";
	num<<=1;
	cout<<num<<endl;
}
void devidedby2 (int num){
	cout<<num<<" --> ";
	num>>=1;
	cout<<num<<endl;
}
void multiplyBy2powi (int num , int i){
	cout<<num<<" --> ";
	num<<=i;
	cout<<num<<endl;
}
void dividedBy2Powi (int num,int i){
    cout<<num<<" --> ";
	num>>=i;
	cout<<num<<endl;
}
void upperTolower (char ch){
	char k =ch;
	 cout<<ch<<" ---> ";
	 ch= ch |(1<<5);
	 cout<<ch<<endl;
	  cout<<"seeBits 1\n  ";
	printBi(k);
	cout<<"| ";
	printBi((1<<5));
	cout<<"  ---------------------------------\n";
	cout<<"  ";
	printBi(ch);

}
void lowerToupper (char ch){
	char k=ch;
	 cout<<ch<<" ---> ";
	 ch= ch &(~(1<<5));
	 cout<<ch<<endl;
	 cout<<"seeBits 2\n  ";
	printBi(k);
	cout<<"& ";
	printBi(~(1<<5));
	cout<<"  ---------------------------------\n";
	cout<<"  ";
	printBi(ch);

}
 void coolUpperToLower (char ch){
 	char k=ch;
 	cout<<ch<<" ---> ";
	ch = ch | ' ';
	 cout<<ch<<endl;
	cout<<"seeBits 3\n  ";
	printBi(k);
	cout<<"| ";
	printBi(' ');
	cout<<"  ---------------------------------\n";
	cout<<"  ";
	printBi(ch);
 }
  void coolLowerToUpper (char ch){
  	char k=ch;
 	cout<<ch<<" ---> ";
	ch = ch & '_';
	 cout<<ch<<endl;
	 cout<<"seeBits 4\n  ";
	printBi(k);
	cout<<"& ";
	printBi('_');
	cout<<"  ---------------------------------\n";
	cout<<"  ";
	printBi(ch);
 }
void  clearLsb (int &num, int pos){
	cout<<"opration step by step \n";
	int k=num;
	printBi((1<<pos+1));
	cout<<" --> ";
	printBi ((1<<pos+1)-1);
	printBi(~((1<<pos+1)-1));
	cout<<endl;
	int h = ~((1<<pos)-1);
	cout<<"  ";
	printBi(k);
	cout<<"& ";
    printBi(h);
	
	k=k&h;
	cout<<"  ---------------------------------\n  ";
	printBi(k);
	num= num& (~((1<<pos)-1));
    return ;
}

void  clearMSB (int &num, int pos){
	cout<<"opration step by step \n";
	int k=num;
	printBi((1<<pos));
	cout<<" --> ";
	printBi ((1<<pos)-1);
	cout<<endl;
	int h = ((1<<pos)-1);
	cout<<"  ";
	printBi(k);
	cout<<"& ";
    printBi(h);
	
	k=k&h;
	cout<<"  ---------------------------------\n  ";
	printBi(k);
	num= num& (((1<<pos)-1));
    return ;
}
  void checkPow2(int num ){
  	if (num&(num-1)) cout<<"not a power of Two\n";
  	else cout<<"it is power of two \n";
  }
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up 
     for (int i=0;i<=8;i++){
     	checkEvenOdd(i);
     	cout<<" --> ";
     	printBi(i);

     }
     int a =7;
     multiplyby2(a);
     devidedby2(a);
     multiplyBy2powi(a,3);
     dividedBy2Powi( a*8,3);
     for (char i='A'; i<'E';i++){
     	cout<<i<<" --> ";
     	printBi(i);
     }
     for (char i='a'; i<'e';i++){
     	cout<<i<<" --> ";
     	printBi(i);
     }
     upperTolower('A');
     lowerToupper('a');
    coolUpperToLower('A');
    coolLowerToUpper('a');
    int b=59;
    clearLsb(b,5);
    printBi(b);
    b=59;
    clearMSB(b,5);
    printBi(b);
    checkPow2(64);
	return 0;
}