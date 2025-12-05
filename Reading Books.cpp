#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    ll mx = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        mx = max(mx, t);
        sum += t;
    }
    cout << max(sum, 2 * mx) << "\n";
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
