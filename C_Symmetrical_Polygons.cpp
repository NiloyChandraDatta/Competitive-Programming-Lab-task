// https://codeforces.com/contest/2153/problem/C
// Codeforces Round 1057 (Div. 2)


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() 
{
    int n; cin >> n;
    map<int, int>mp;
    for(int i = 0; i < n; i++) 
    {
        int x;  cin >> x;
        mp[x]++;
    }
    ll ans = 0, sum = 0;
    int cnt = 0;
    vector<int> od;
    vector<ll> pref;
    for(auto x : mp) 
    {
        int l = x.first;
        int c = x.second;
        sum += (ll)l * c;
        cnt += c;
        if(c % 2 != 0) 
        {
            od.push_back(l);
            if(pref.empty()) pref.push_back(l);
            else pref.push_back(pref.back() + l);
        }
        if(cnt < 3) continue;
        ll cur = sum;
        int mx = l, sz = od.size();
        if(sz > 2) 
        {
            int rem = sz - 2;
            ll rsum = pref[rem - 1];
            cur -= rsum;
        }
        if(cur > 2LL * mx) 
        {
            ans = max(ans, cur);
        }
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