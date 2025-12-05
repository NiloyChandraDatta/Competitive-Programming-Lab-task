//https://cses.fi/problemset/task/3420

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    map<int, int>mp;
    long long cnt = 0;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        int curr; cin >> curr;
        if (mp.count(curr))
        {
            l = max(l, mp[curr] + 1);
        }
        mp[curr] = i;
        cnt += (i - l + 1);
    }
    cout << cnt;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1; // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}