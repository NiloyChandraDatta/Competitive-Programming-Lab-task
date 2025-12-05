// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/?envType=problem-list-v2&envId=string
// codefocres allso have this type of problem
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int ans = 0;
        for(auto& s : operations) 
        {
            if(s[1] == '+') ans++;
            else ans--;
        }
        return ans;
    }
};