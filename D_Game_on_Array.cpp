#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; cin >> n;
    map<int, int>mp;
    ll tot = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        mp[x]++;
        tot += x;
    }
    vector<int>v;
    for (auto it : mp)
    {
        if (it.first % 2 != 0)
        {
            v.push_back(it.second);
        }
    }
    sort(v.rbegin(), v.rend());
    ll d = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
            d += v[i];
        
        else
            d -= v[i];
    
    }
    cout << (tot+d)/2<<" "<<(tot-d)/2<< endl;
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