#include <iostream>
using namespace std ;
int fastMultiplication(int a, int b){
    int res= 0;
    while(b){
         if(b&1) res += a;
     a *=2;
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