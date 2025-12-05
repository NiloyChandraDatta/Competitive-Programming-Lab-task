// https://codeforces.com/contest/1352/problem/A
// Codeforces Round 640 (Div. 4)
/*
 *    niloy
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() 
{
    int n; cin >> n;
    vector<int>v;
    int p = 1;
    while(n) 
    {
        int d = n % 10;
        if(d > 0) 
        {
            v.push_back(d * p);
        }
        n /= 10;
        p *= 10;
    }
    cout << v.size() << endl;
    for(int x : v) 
    {
        cout << x << " ";
    }
    cout << endl;
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