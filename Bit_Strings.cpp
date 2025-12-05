#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int n; cin >> n;
    ll res = 1;
    ll mod = 1e9 + 7;
    for (int i = 0; i < n; i++) 
    {
        res = (res * 2) % mod;
    }
    cout << res << endl;
    return 0;
}