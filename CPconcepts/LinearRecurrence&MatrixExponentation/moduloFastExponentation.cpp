#include <iostream>
using namespace std ;
int mod = 1e9+7; // Define a large prime number for modulo operations
int fastMultiplication(int a, int b){
    int res= 0;
    while(b){
         if(b&1) res += a, res %=mod;
     a *=2, a%=mod;
     b>>=1;
    }
   return res;
}
int main() {
   int a, b, c;
   cout<<"Enter the first number: ";
   cin>>a;
   cout<<"enter the second Number:";
   cin>>b;
   c = fastMultiplication(a, b);
   cout<<"The product is: "<<c<<endl;;
    return 0;
}