// https://codeforces.com/contest/2164/problem/A
// Codeforces Global Round 30 (Div. 1 + Div. 2)
/*
 *    niloy
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n; cin >> n;

    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll x; cin >> x;

    ll min_val = a[0];
    ll max_val = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min_val)
        {
            min_val = a[i];
        }
        if (a[i] > max_val)
        {
            max_val = a[i];
        }
    }

    if (x >= min_val && x <= max_val) 
        cout <<"YES"<<endl;
    else 
        cout << "NO" << endl;
    
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