#include <iostream>
#include <vector>
using namespace std ;
vector<vector<int>> PrimeFactor(int n){
    vector<vector<int>>factor;
    for(int i=2; i<=n;i++){
        if(n%i==0){
            int count=0;
            while(n%i==0){
                count++;
                n/=i;
            }
            factor.push_back({i, count});
        }
    }
    return factor;
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>>factors = PrimeFactor(n);
    for(auto &factor : factors){
        cout << factor[0] << " " << factor[1] << endl;
    }
    return 0;
}