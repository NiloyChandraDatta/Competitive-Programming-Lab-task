#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    int N = n - 1;
    vector<int>lm(N + 2, 0);
    for (int i = 0; i < m; ++i)
    {
        int u, v;  cin >> u >> v;
        v--; 
        if (v + 1 <= N + 1)
        {
            lm[v + 1] = max(lm[v + 1], u);
        }
    }
    for (int i = 1; i <= N + 1; ++i)
    {
        lm[i] = max(lm[i], lm[i - 1]);
    }
    vector<ll>dp(N + 2, 0);
    vector<ll>S(N + 2, 0);
    dp[0] = 1;
    S[0] = 1;
    ll MOD = 998244353;
    for (int i = 1; i <= N + 1; ++i)
    {
        int b = lm[i];
        ll sub = (b == 0 ? 0 : S[b - 1]);
        dp[i] = (S[i - 1] - sub + MOD) % MOD;
        S[i] = (S[i - 1] + dp[i]) % MOD;
    }
    cout << (dp[N + 1] * 2) % MOD << "\n";
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