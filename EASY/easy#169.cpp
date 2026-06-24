#include <vector>
#include "unordered_map"

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        //exist more than n/2 times we can use a hash map to look for it
        // 1,2 1-number 2-how many times
        int n = nums.size();
        std::unordered_map<int,int> mapa;

        for(auto& it : nums)
        {
            mapa[it]++;
        }

        for(auto& pair : mapa)
        {
            if(pair.second > n/2)
            {
                return pair.first;
            }
        }
    }
};