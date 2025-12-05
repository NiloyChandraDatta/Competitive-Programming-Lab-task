#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    vector<int>v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    sort(v.begin(), v.end());
    if (v[0] == v[3])
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
    while(tc--)
    {
        solve();
    }
    return 0;
}