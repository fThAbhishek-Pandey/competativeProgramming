#include <iostream>
using namespace std ;
void primeNumRange(int n) {
   if(n<=2){
      cout<<1<<" "<<2<<endl;
   }
   for(int i=0; i<=n; i++){
     bool isPrime = true;
     for(int j=2; j*j<i; j++){
        if(i%j==0){
            isPrime = false;
            break;
        }
     }
     if(isPrime && i > 1) {
         cout << i << " ";
     }
   }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    primeNumRange(n);
    return 0;
}