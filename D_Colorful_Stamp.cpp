// https://codeforces.com/contest/1669/problem/D
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    int n; cin >> n;
    string s; cin >> s;
    int r = 0, b = 0;
    for(int i = 0; i < n; i++) 
    {
        if(s[i] == 'W') 
        {
            if((r > 0 && b == 0) || (b > 0 && r == 0)) 
            {
                cout << "NO" << endl;
                return;
            }
            r = 0; b = 0;
        }
        else 
        {
            if(s[i] == 'R') r++;
            else b++;
        }
    }
    if((r > 0 && b == 0) || (b > 0 && r == 0)) 
    {
        cout << "NO" << endl;
    }
    else 
    {
        cout << "YES" << endl;
    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1; cin >> tc;
    while(tc--) 
    {
        solve();
    }
    return 0;
}
//input
// 12
// 5
// BRBBW
// 1
// B
// 2
// WB
// 2
// RW
// 3
// BRB
// 3
// RBB
// 7
// WWWWWWW
// 9
// RBWBWRRBW
// 10
// BRBRBRBRRB
// 12
// BBBRWWRRRWBR
// 10
// BRBRBRBRBW
// 5
// RBWBW

//OutputCopy
// YES
// NO
// NO
// NO
// YES
// YES
// YES
// NO
// YES
// NO
// YES
// NO
