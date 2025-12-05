// https://codeforces.com/contest/1669/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    int n; cin >> n;
    vector<int>cnt(n + 1, 0);
    int ans = -1;
    for(int i = 0; i < n; i++) 
    {
        int x; cin >> x;
        cnt[x]++;
        if(cnt[x] >= 3) ans = x;
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