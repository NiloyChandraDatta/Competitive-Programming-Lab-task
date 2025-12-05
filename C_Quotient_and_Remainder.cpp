#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k; cin >> n >> k;

    vector<ll>q(n);
    for (int i = 0; i < n; i++) cin >>q[i];

    vector<ll>r(n);
    for (int i = 0; i < n; i++) cin >>r[i];

    ll K = k + 1;
    for (int i = 0; i < n; ++i) q[i]++;
    for (int i = 0; i < n; ++i) r[i]++;

    sort(q.rbegin(), q.rend());

    multiset<ll>ms;
    for (ll x : r) ms.insert(x);

    ll ans = 0;
    for (ll val_q : q)
    {
        if (ms.empty())
            break;

        ll limit = K / val_q;
        auto it = ms.upper_bound(limit);

        if (it != ms.begin())
        {
            --it;
            ans++;
            ms.erase(it);
        }
    }
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