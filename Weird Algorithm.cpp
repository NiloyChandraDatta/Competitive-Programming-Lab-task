#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    while(n > 1)
    {
        cout << n << " ";
        if(n & 1) n = 3 * n + 1;
        else n >>= 1;
    }
    cout << "1\n";
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
