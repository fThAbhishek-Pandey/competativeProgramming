#include <iostream>
using namespace std ;
const int m=1e9+7; // Modulo value, can be changed as needed
int moduloExponentation(int a, int b){
    int res=1;
    while(b){
        if(b&1) res=res*a, res%=m;
        a*=a, a%=m;
        b>>=1;
    }
    return res;
}
int main() {
    int a , b, c;
    cout<<"Enter the base: ";
    cin>>a;
    cout<<"Enter the exponent: ";
    cin>>b;
    c=moduloExponentation(a,b);
    cout<<"the ans is "<<c<<endl;
    return 0;
}