//https://cses.fi/problemset/task/1621/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    cout << a.size() << "\n";
}
