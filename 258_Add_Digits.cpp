// https://leetcode.com/problems/add-digits/description/
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int addDigits(int num) 
    {
        while(num >= 10) 
        {
            int s = 0;
            while(num) 
            {
                s += num % 10;
                num /= 10;
            }
            num = s;
        }
        return num;
    }
};