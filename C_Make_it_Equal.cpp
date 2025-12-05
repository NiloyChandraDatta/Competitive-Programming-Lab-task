#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; ll k; cin >> n >> k;
    map<ll, int> s_cnt;
    for (int i = 0; i < n; i++)
    {
        ll num; cin >> num;
        s_cnt[min(num % k, k - (num % k))]++;
    }
    map<ll, int> t_cnt;
    for (int i = 0; i < n; i++)
    {
        ll num; cin >> num;
        t_cnt[min(num % k, k - (num % k))]++;
    }
    if (s_cnt == t_cnt)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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