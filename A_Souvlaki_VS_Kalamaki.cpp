// https://codeforces.com/contest/2163/problem/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    sort(a.begin(), a.end());
    bool flag = true;
    for (int i = 1; i < n - 1; i += 2)
    {
        if (a[i] != a[i + 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
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