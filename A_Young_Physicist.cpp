#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() 
{
    int n; cin >> n;
    int sx = 0, sy = 0, sz = 0;
    while(n--) 
    {
        int x, y, z; cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }
    if(sx == 0 && sy == 0 && sz == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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