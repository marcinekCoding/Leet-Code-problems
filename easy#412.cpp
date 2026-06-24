#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizi;
        for(int i=0;i<=n;i++)
        {
            if(i%5!=0 && i%3 != 0)
            {
                fizi.push_back(to_string(i));
                continue;
            }
            if(i%5==0 && i%3==0)
            {
                fizi.push_back("FizzBuzz");
                continue;
            }
            if(i%5 == 0){
                fizi.push_back("Fuzz");
                continue;
            }else
            {
                fizi.push_back("Buzz");
            }
        }
        return fizi;
    }
};