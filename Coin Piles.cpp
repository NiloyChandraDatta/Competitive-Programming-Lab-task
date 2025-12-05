#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++)
    {
        int a, b;
        cin >> a >> b;
        if((a+b) % 3 != 0 || a > 2*b || b > 2*a)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1; // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
