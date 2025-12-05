#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() 
{
    int a, b; cin >> a >> b;
    int mn = min(a, b);
    int ans = (max(a, b) - mn) / 2;
    cout << mn << " " << ans << endl;
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