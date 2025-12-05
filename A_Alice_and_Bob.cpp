#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; ll a; cin >> n >> a;
    int l = 0, r = 0;
    ll mn = -1, mx = -1;
    for (int i = 0; i < n; ++i)
    {
        ll x; cin >> x;
        if (x < a)
        {
            l++;
            mn = x;
        }
        if (x > a)
        {
            r++;
            if (mx == -1)
            {
                mx = x;
            }
        }
    }
    if (r > l)
    {
        cout << 2 * mx - a - 1 << "\n";
    }
    else if (l > 0)
    {
        ll ans = 2 * mn - a + 1;
        if (ans < 0) ans = 0;
        cout << ans << "\n";
    }
    else
    {
        cout << a << "\n";
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