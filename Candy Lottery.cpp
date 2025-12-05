#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    double ans = 0;
    for(int i = 1; i <= k; i++)
    {
        double a = 1.0, b = 1.0;
        for(int j = 1; j <= n; j++)
        {
            a *= (double) i / k;
            b *= (double) (i-1) / k;
        }
        ans += (a - b) * i;
    }
    cout << fixed << setprecision(6) << ans << "\n";
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
