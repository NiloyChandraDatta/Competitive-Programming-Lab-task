#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n; cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << 9 << endl;
        return;
    }
    ll v1 = n * n - 1;
    ll c1 = 4 * v1 - n;
    ll v2 = n * n - n - 1;
    ll c2 = 5 * v2;
    cout << max(c1, c2) << endl;
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