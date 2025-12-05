// https://codeforces.com/contest/855/problem/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; cin  >>n;
    map<string, bool>mp;
    string st;
    for (int i = 0; i < n; i++)
    {
        cin >> st;
        if (mp[st])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            mp[st] = true;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1; cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}