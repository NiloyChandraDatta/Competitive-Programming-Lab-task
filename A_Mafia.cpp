#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n; cin >> n;
    ll s = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        s += x;
        if (x > mx)
        {
            mx = x;
        }
    }
    ll k1 = mx;
    ll k2 = (s + n - 2) / (n - 1);
    cout << max(k1, k2)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}