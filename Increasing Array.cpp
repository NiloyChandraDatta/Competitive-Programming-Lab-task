#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    ll mx, sum = 0;
    cin >> mx;
    for(int i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        sum += (mx - x);
    }
    cout << sum << "\n";
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
