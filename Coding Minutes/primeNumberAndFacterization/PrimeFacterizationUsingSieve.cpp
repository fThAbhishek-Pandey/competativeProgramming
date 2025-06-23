#include <iostream>
#include<vector>
using namespace std ;
vector<int> primeSieve(int n){
    vector<int> sieve(n+1, 0);
    sieve[0]= sieve[1]=0;
    for(int i=2; i<=n; i++){
        if(sieve[i]==0){
            for(int j=i;j<=n; j+=i){
               if(sieve[j]==0) // Only mark if it hasn't been marked yet
                sieve[j]=i;
            }
        }
    }
    return sieve;
}

int main() {
    int n;
    cout<<"Enter a number:";
    cin>>n;
    vector<int> sieve = primeSieve(n);
    vector<vector<int>> factors;
    while(n>1){
        int primeFactor = sieve[n];
        int count = 0;
        while(n % primeFactor == 0) {
            count++;
            n /= primeFactor;
        }
        factors.push_back({primeFactor, count});
    }

    for(const auto& factor : factors) {
        cout << "Prime Factor: " << factor[0] << ", Count: " << factor[1] << endl;
    }
    cout << "Prime factorization completed." << endl;
    cout << "Sieve of Eratosthenes used for factorization." << endl;
    cout << "Time complexity: O(n log log n) for sieve, O(log n) for factorization." << endl;
    cout << "Space complexity: O(n) for sieve." << endl;
    return 0;
}