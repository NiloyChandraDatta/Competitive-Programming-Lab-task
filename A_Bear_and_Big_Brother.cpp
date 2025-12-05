//https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int a, b; cin >> a >> b;
    int cnt = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        cnt++;
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