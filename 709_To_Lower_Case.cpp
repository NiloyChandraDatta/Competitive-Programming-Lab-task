 // https://leetcode.com/problems/to-lower-case/description/?envType=problem-list-v2&envId=string
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string toLowerCase(string s) 
    {
        for(char &c : s) 
        {
            if(c >= 'A' && c <= 'Z') 
            {
                c += 32;
            }
        }
        return s;
    }
};