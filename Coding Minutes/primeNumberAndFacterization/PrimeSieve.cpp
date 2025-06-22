#include <iostream>
#include <vector>
using namespace std ;
void PrimeSieve(vector<int>& sieve){
   int n = sieve.size();
   for(int i=2; i*i<=n;i++){
    if(sieve[i]){
        for(int j=i*i; j<n; j+=i){
            sieve[j] = 0;
        }
    }
   }
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    vector<int> sieve(n+1,1);
    sieve[0]= sieve[1]=0;
    PrimeSieve(sieve);
    cout << "Prime numbers up to " << n << ": ";
    for(int i=2; i<=n;i++){
        if(sieve[i]){
            cout << i << " ";
        }
    }
    return 0;
}