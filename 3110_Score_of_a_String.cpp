// https://leetcode.com/problems/score-of-a-string/description/?envType=problem-list-v2&envId=string
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int scoreOfString(string s) 
    {
        int ans = 0;
        for(int i = 0; i < s.size() - 1; i++) 
        {
            ans += abs(s[i] - s[i+1]);
        }
        return ans;
    }
};