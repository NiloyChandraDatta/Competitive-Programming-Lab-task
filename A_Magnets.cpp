// https://codeforces.com/problemset/problem/344/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>a(n);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a.rbegin(), a.rend());
    int s1 = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        s1 += a[i];
        cnt++;
        if (s1 > s - s1)
        {
            break;
        }
    }
    cout << cnt << endl;
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