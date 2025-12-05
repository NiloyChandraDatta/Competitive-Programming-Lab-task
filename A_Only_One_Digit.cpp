#include<bits/stdc++.h>
using namespace std;
 
int32_t main() 
{
    int tc = 1; cin >> tc;
    while (tc--) 
    {
        int x; cin >> x;
        int y = 0;
        while (true) 
        {
            int curr = x;
            while (curr > 0) 
            {
                if (curr % 10 == y % 10) 
                {
                    cout << y << endl;
                    break;
                }
                curr /= 10;
            }
            if (curr <= 0) 
            {
                y++;
            } 
            else 
            {
                break;
            }
        }
    }
    return 0;
}