#include <iostream>
using namespace std ;

int main() {
    int num;
    cout<<"Enter the binary Number : ";
    cin>>num;
    int ans=0;
    int k=31;
    while (num){
        ans = 10*ans + (num&1);
        num >>=1;
    }
    cout<<"ans : "<<ans<<endl;
    return 0;
}