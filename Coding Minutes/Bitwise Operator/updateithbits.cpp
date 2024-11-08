#include <iostream>
using namespace std ;

int main() {
    int num=5;
    // cin>> num;
    int i=2;
    // cin>>i;
    num &= ~(1<<i);
    // now ith bit is clear
    cout<<"the updated number is :"<<num;
    return 0;
}