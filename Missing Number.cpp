#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n; cin >> n;
    int xum = 0;
    for(int i = 1; i <= n; i++)
    {
        xum ^= i;
    }
    for(int i = 0; i < n - 1; i++)
    {
        int x; cin >> x;
        xum ^= x;
    }
    cout << xum << "\n";
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
