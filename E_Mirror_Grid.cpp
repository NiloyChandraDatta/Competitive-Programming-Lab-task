#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m; cin >> n >> m;
    ll ans = 0, pt = 0, ps = 0;
    for (int i = 0; i < n; ++i)
    {
        ll ct, cs; cin >> ct >> cs;
        ll dt = ct - pt;
        ll ds = abs(cs - ps);
        if ((dt % 2) != (ds % 2))
        {
            ans += dt - 1;
        }
        else
        {
            ans += dt;
        }
        pt = ct;
        ps = cs;
    }
    ans += m - pt;
    cout << ans << endl;
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