//https://codeforces.com/contest/2161/my
/*
 *    niloy
 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll r, x, d; int n; cin >> r >> x >> d >> n;
    string s; cin >> s;

    int cnt = 0;
    ll mn = r, mx = r;

    for (char c : s)
    {
        bool flag  = false;
        if (c == '1')
        {
            flag = true;
        }
        else
        {
            if (mx < x) flag  = true;
            else if (mn >= x)  flag  = false;
            else flag  = true;
            
        }

        if (flag)
        {
            cnt++;
            mn = max(0LL, mn - d);
            mx = mx + d;
        }
    }
    cout <<cnt<<"\n";
}

int main()
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