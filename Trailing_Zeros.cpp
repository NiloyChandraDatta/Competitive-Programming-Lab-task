#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    ll cnt = 0;
    for (ll i = 5; n / i >= 1; i *= 5) 
    {
        cnt += n / i;
        if (i > n / 5) break; 
    }
    cout << cnt << endl;
    return 0;
}
