#include <vector>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size();
        while(digits[i-1] == 9)
        {
            digits[i-1]=0;
            if(i<=1)
            {
            digits.insert(digits.begin(), 1);
            return digits;
            }
            i--;
        }
        digits[i-1]+=1;
        return digits;
    }

};