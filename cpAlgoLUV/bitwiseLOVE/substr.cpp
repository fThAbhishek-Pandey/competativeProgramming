#include<bits/stdc++.h>
using namespace std;
 bool balance (string str ){
       int countL=0,countR=0;
       for (int i=0;i<str.size();i++){
           if (str[i] =='L') countL++;
           else countR++;
       }
       return countL == countR;
   }
    int balancedStringSplit(string s) {
        int count =0;
        for (int i=0;i<s.size();i++){
            for (int j =i+1;j<s.size();j++){
                if (balance(s.substr(i,j-i+1))){
                    cout<<s.substr(i,j-i+1)<<" ";
                    count++;
                } 
            }
        }
        return count;  
    }
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);// FOR GETTING input form input,text
    freopen("output.txt","w",stdout);// for writing output to output.txt
    #endif 
    // Never Give Up 
     int t;
     cin>>t;
     while (t--){
        string str;
        cin>>str;
        cout<<"that is : "<<balancedStringSplit(str)<<endl;
 }
    return 0;
}