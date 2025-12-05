#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, q; cin >> n >> k >> q;
    vector<int> mk(n + 1, 0);
    vector<int> bad(n + 1, 0);
    vector<pair<int, int>> vp;
    for (int i = 0; i < q; ++i)
    {
        int c, l, r; cin >> c >> l >> r;
        if (c == 1)
        {
            for (int j = l; j <= r; ++j)
            {
                mk[j] = 1;
            }
        }
        else
        {
            vp.push_back({l, r});
            for (int j = l; j <= r; ++j)
            {
                bad[j] = 1;
            }
        }
    }
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        if (mk[i])
        {
            if (bad[i])
            {
                a[i] = k + 1;
            }
            else
            {
                a[i] = k;
            }
        }
        else
        {
            a[i] = -1;
        }
    }
    sort(vp.begin(), vp.end(), [](pair<int, int> x, pair<int, int> y)
    {
        return x.second < y.second;
    });
    for (int v = 0; v < k; ++v)
    {
        vector<int> dn(vp.size(), 0);
        for (int i = 0; i < vp.size(); ++i)
        {
            if (dn[i]) continue;
            int l = vp[i].first;
            int r = vp[i].second;
            int p = -1;
            for (int j = r; j >= l; --j)
            {
                if (a[j] == -1)
                {
                    p = j;
                    break;
                }
            }
            if (p != -1)
            {
                a[p] = v;
                for (int j = 0; j < vp.size(); ++j)
                {
                    if (vp[j].first <= p && vp[j].second >= p)
                    {
                        dn[j] = 1;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == -1) a[i] = 0;
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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