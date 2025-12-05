// https://codeforces.com/contest/2166/problem/B
// Codeforces Round 1064 (Div. 2)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b, n; cin >> a >> b >> n;

    if (n > a/b && a != b)
        cout << 2 << endl;
    
    else
        cout << 1 << endl;
    
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