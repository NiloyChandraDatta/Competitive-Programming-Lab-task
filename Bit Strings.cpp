#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9+7;

void solve()
{
    int n;
    cin >> n;
    ll res = 1;
    ll base = 2;
    while(n)
    {
        if(n & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        n >>= 1;
    }
    cout << res << "\n";
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
