#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9+7;

void solve()
{
    int tc; cin >> tc;
    for(int i = 0; i < tc; i++)
    {
        ll a, b;
        cin >> a >> b;
        ll res = 1;
        while(b)
        {
            if(b & 1) res = (res * a) % MOD;
            a = (a * a) % MOD;
            b >>= 1;
        }
        cout << res << "\n";
    }
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
