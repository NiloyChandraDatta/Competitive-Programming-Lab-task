// https://leetcode.com/problems/add-digits/description/
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int addDigits(int n) 
    {
        if (n == 0) 
        {
            return 0;
        }
        return 1 + (n - 1) % 9;
    }
};