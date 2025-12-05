#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n , y , r; cin >>n >> y >> r;
    int susp = min(n, r);
    int rem = n - susp;
    susp += min(rem, y / 2);
    cout << susp << "\n";
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