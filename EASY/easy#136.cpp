class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int wartosc = 0;
        for (auto& it : nums)
        {
            wartosc = wartosc ^ it;
        }
        return wartosc;
    }
};