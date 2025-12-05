#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n; cin >> n;
    ll s = 0;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        s += x;
        if (x > 0) cnt++;
    }
    cout << min(cnt, s - n + 1) << endl;
}

int32_t main()
{
    int tc = 1; cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}