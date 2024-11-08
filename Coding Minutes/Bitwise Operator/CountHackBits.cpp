#include <iostream>
using namespace std ;

int main() {
    int num;
    cin>>num;
    int count =0;
    while(num){
        num = num&(num-1);
        count++;
    }
    cout<<"the total set bit is : "<<count<<endl;
    return 0;
}