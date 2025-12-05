#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n; cin >> n;
    int res = 1;
    while(n > 1)
    {
        res *= n;
        n--;
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
