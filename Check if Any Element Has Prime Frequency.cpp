// https://leetcode.com/problems/check-if-any-element-has-prime-frequency/description/?envType=problem-list-v2&envId=number-theory
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
private:
    bool is_p(int n) 
    {
        if (n <= 1) 
        {
            return false;
        }
        if (n <= 3) 
        {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0) 
        {
            return false;
        }
        for (int i = 5; i * i <= n; i = i + 6) 
        {
            if (n % i == 0 || n % (i + 2) == 0) 
            {
                return false;
            }
        }
        return true;
    }

public:
    bool checkPrimeFrequency(vector<int>& nums) 
    {
        map<int, int> cnt;
        for (int x : nums) 
        {
            cnt[x]++;
        }
        
        for (auto const& [val, freq] : cnt) 
        {
            if (is_p(freq)) 
            {
                return true;
            }
        }
        
        return false;
    }
};