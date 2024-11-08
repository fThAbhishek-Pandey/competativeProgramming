#include <iostream>
using namespace std ;
bool isPower2( int num){
     if (num&(num-1)==0) return true;
    return false;
}
int main() {
    int n;
    cin>>n;
    if(isPower2(n)){
        cout<<n<<" is a power of 2";
    }
    else cout<<n<<" is not power of 2";
    return 0;
}