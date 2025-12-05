// https://codeforces.com/problemset/problem/758/A
// Codeforces Round 392 (Div. 2)
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    int n; cin >> n;
    vector<int>v(n);
    int mx = 0;
    for(int i = 0; i < n; i++) 
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    int ans = 0;
    for(int x : v) 
    {
        ans += (mx - x);
    }
    cout << ans << endl;
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