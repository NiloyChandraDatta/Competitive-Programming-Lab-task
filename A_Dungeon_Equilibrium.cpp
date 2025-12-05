#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        cnt[x]++;
    }
    int ans = 0;
    for (int i = 0; i <= n; ++i)
    {
        if (cnt[i] > 0)
        {
            if (i == 0)
            {
                ans += cnt[i];
            }
            else if (cnt[i] < i)
            {
                ans += cnt[i];
            }
            else
            {
                ans += cnt[i] - i;
            }
        }
    }
    cout << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1; cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}