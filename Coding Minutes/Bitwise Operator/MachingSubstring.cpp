#include <iostream>
using namespace std ;

int main() {
    int n,m;
    cout<<"enter the value of N,M";
    cin>>n>>m;
    int i,j;
    cout<<"enter the value of i,j";
    cin>>i>>j;
    int mask1= (-1<<i);
    int mask2 = (1<<j)-1;
    int mask = mask1 |mask2;
    m |= mask;
    n &=m;
    cout<<"the required number is : "<<n;
    return 0;
}