#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k; cin >> n >> k;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    if (k % 2 == 0)
    {
        ll mx = -2e18;
        ll cur = 0;
        for (int i = 0; i < n; ++i)
        {
            cur += a[i];
            if (cur > mx) mx = cur;
            if (cur < 0) cur = 0;
        }
        cout << mx << "\n";
    }
    else
    {
        vector<ll> p(n), s(n);
        ll c = 0;
        for (int i = 0; i < n; ++i)
        {
            c = max(a[i], c + a[i]);
            p[i] = c;
        }
        c = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            c = max(a[i], c + a[i]);
            s[i] = c;
        }

        ll res = -2e18;
        for (int i = 0; i < n; ++i)
        {
            ll now = a[i] + b[i];
            ll left = (i > 0) ? max(0LL, p[i - 1]) : 0;
            ll right = (i < n - 1) ? max(0LL, s[i + 1]) : 0;
            res = max(res, left + now + right);
        }

        ll base = -2e18;
        c = 0;
        for (int i = 0; i < n; ++i)
        {
            c += a[i];
            base = max(base, c);
            if (c < 0) c = 0;
        }
        cout << max(res, base) << "\n";
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
