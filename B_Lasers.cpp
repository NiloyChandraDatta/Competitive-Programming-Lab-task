//
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, m, x, y; cin >> n >> m >> x >> y;
    for (int i = 0; i < n; ++i)
    {
        int a; cin >> a;
    }
    for (int i = 0; i < m; ++i)
    {
        int b; cin >> b;
    }
    cout << n + m << endl;
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