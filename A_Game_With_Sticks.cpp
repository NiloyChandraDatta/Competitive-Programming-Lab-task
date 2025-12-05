#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() 
{
    int n, m; cin >> n >> m;
    int mn = min(n, m);
    if(mn % 2 == 0) 
    {
        cout << "Malvika" << endl;
    }
    else 
    {
        cout << "Akshat" << endl;
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