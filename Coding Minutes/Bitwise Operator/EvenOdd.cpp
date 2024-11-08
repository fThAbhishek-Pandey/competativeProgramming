//Write a function to check if no is even or odd ?
#include <iostream>
using namespace std ;
bool EvenOdd (int num){
    return num&1;
}
int main() {
    int num;
    cin>>num;
    bool flag = EvenOdd (num);
    if(flag) cout<<"it is a Odd Number"<<endl;
    else cout<< "it is a even number"<<endl;

    return 0;
}