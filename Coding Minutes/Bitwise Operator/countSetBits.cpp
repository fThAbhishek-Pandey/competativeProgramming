#include <iostream>
using namespace std ;

int main() {
    int n;
    cin>>n;
    int count=0;
    while(n){
        if(n&1)count++;
        n>>=1;
    }
    cout<<"the no of set bit is : "<<count<<endl;
    return 0;
}