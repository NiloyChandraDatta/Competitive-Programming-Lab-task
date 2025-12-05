// https://leetcode.com/problems/base-7/description/?envType=problem-list-v2&envId=string
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string convertToBase7(int num) 
    {
        if (num == 0) 
        {
            return "0";
        }
        
        string ans = "";
        bool f = num < 0;
        int n = abs(num);
        
        while (n > 0) 
        {
            ans += to_string(n % 7);
            n /= 7;
        }
        
        if (f) 
        {
            ans += '-';
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};