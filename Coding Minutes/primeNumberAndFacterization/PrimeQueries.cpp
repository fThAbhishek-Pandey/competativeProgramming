#include <iostream>
#include<vector>
using namespace std ; 
void PrimeSieve(vector<int>&sieve){
    vector<int>primes(1e6+1,1);
    primes[0] = primes[1] = 0; // 0 and 1 are not prime numbers
    for(int i=2; i<1e6+1;i++){
        if(primes[i]){
           for(int j=i*i; j<primes.size(); j+=i){
            primes[j]=0;
        }
     }
       
    }
    for(int i=1; i<1e6+1;i++){
        if(primes[i]){
            // cout<<i<<" ";
            sieve[i] = sieve[i-1]+1;
        }
        else {
            sieve[i] = sieve[i-1];
        }

    }
}
int main() {
    
vector<int>sieve(1e6+1,0);
 PrimeSieve(sieve);

    int p,q;
    cin>>p>>q;
    for(int i =0; i<=q; i++){
        cout<<sieve[i]<<" ";
    }
    cout<<sieve[q]- sieve[p-1]<<endl;
    return 0;
}