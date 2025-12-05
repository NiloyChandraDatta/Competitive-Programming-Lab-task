// https://leetcode.com/problems/sort-the-people/description/?envType=problem-list-v2&envId=string
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        vector<pair<int, string>>v;
        int n = names.size();
        for(int i = 0; i < n; i++) 
        {
            v.push_back({heights[i], names[i]});
        }
        sort(v.rbegin(), v.rend());
        vector<string>ans;
        for(auto& p : v) 
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};