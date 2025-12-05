#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs.back();
        string ans = "";
        for(int i = 0; i < a.size(); i++) 
        {
            if(a[i] == b[i]) 
            {
                ans += a[i];
            }
            else 
            {
                break;
            }
        }
        return ans;
    }
};