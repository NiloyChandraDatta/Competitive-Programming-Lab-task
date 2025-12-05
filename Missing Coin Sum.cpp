#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int maxN = 2e5;

void solve()
{
    int n;
    cin >> n;
    int x[maxN];
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);

    ll res = 1;
    for(int i = 0; i < n && x[i] <= res; i++)
    {
        res += x[i];
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
