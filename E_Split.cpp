// https://codeforces.com/contest/2148/problem/E
/*
 *    niloy
 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    vector<int>a(n), cnt(n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    vector<int>tgt(n + 1, 0);
    bool poss = true;
    for (int i = 1; i <= n; ++i)
    {
        if (cnt[i] % k != 0)
        {
            poss = false;
            break;
        }
        tgt[i] = cnt[i] / k;
    }

    if (!poss)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;
    int r = -1;
    vector<int> curr(n + 1, 0);

    for (int l = 0; l < n; ++l)
    {
        if (l > 0)
        {
            curr[a[l - 1]]--;
        }

        while (r + 1 < n)
        {
            int temp = a[r + 1];
            if (curr[temp] < tgt[temp])
            {
                r++;
                curr[a[r]]++;
            }
            else
            {
                break;
            }
        }
        ans += (r - l + 1);
    }
    cout << ans << endl;
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