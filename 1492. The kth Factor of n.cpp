// https://leetcode.com/problems/the-kth-factor-of-n/description/?envType=problem-list-v2&envId=number-theory

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int kthFactor(int n, int k) 
    {
        vector<int> f;
        int sq = sqrt(n);
        
        for (int i = 1; i <= sq; i++) 
        {
            if (n % i == 0) 
            {
                f.push_back(i);
            }
        }
        
        if (k <= f.size()) 
        {
            return f[k - 1];
        }
        
        int remaining = k - f.size();
        int idx = f.size() - 1;
        
        if (sq * sq == n) 
        {
            idx--;
        }
        
        if (remaining > f.size() - (sq * sq == n)) 
        {
            return -1;
        }
        
        return n / f[idx - remaining + 1];
    }
};