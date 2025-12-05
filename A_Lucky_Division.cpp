#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    int n; cin >> n;
    vector<int> v = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool flag = false;
    for(int x : v) 
    {
        if(n % x == 0) 
        {
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
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