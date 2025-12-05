#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    long long pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            pos += a[i] - b[i];
        }
    }
    cout << pos + 1 << "\n";
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