#include <bits/stdc++.h>
using namespace std;
#define ll long long


int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) 
    {
        ll a, b;
        cin >> a >> b;

        ll mn = min(a, b);
        ll mx = max(a, b);

        if( (a + b) % 3 == 0 && mn * 2 >= mx )
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
