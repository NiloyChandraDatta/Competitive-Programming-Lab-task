// https://leetcode.com/problems/count-and-say/?envType=problem-list-v2&envId=string
class Solution
{
public:
    string countAndSay(int n)
    {
        string res = "1"; 
        
        for (int i = 2; i <= n; ++i)
        {
            string temp = "";
            int cnt = 1;
            
            for (int j = 1; j < res.length(); ++j)
            {
                if (res[j] == res[j - 1])
                {
                    cnt++;
                }
                else
                {
                    temp += to_string(cnt) + res[j - 1];
                    cnt = 1;
                }
            }
            temp += to_string(cnt) + res[res.length() - 1];
            res = temp;
        }
        
        return res;
    }
};


