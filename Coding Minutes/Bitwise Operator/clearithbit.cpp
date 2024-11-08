#include <iostream>
using namespace std ;

int main() {
    int num;
    cin>> num;
    int i;
    cin>>i;
    num &= ~(1<<i);
    // now ith bit is clear
    return 0;
}