//Count Almost Equal Pairs1 
// https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/description/
#include <iostream>
#include<vector>
#include<climits>
using namespace std ;
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k--){
            int mini= INT_MAX;
            int h=0;
            for(int i=0;i<nums.size();i++){
                 if(mini > nums[i]){
                     h=i;
                     mini= nums[i];
                 }
            }
            nums[h] = mini* multiplier;
        }
        return nums;
    }
};
int main() {
    // I love Abhishek ji 
    cout << "NamasKar Abhishek ji !" <<endl;
    return 0;
}