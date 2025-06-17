#include <iostream>
using namespace std ;
int binaryExponentation(int a, int b){
    int res=1;
    while(b){

        if(b&1) res=res*a;
        a*=a;
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
    c=binaryExponentation(a,b);
    cout<<"the ans is "<<c<<endl;
    return 0;
}