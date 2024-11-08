#include <iostream>
using namespace std ;

int main() {
     int num =5;
     int i=5,j= 2;
     int mask1 = (-1 << i);
     int mask2 = ~(-1 <<j);
     int mask = mask1|mask2;
     num &= mask;
     cout<<"now updated bit is : "<<num;
    return 0;
}