#include <iostream>
using namespace std ;

int main() {
    int num;
    cin>> num;
    int i;
    cin>>i;
    int a = 1<<i;
    int ithbit = a&num;
    cout<<"the ith bit is : " <<ithbit<<endl;
    return 0;
}