#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x, y, z; cin >> x >> y >> z;
    
    int xy = x & y;
    int yz = y & z;
    int xz = x & z;

    if (xy == yz && yz == xz)
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