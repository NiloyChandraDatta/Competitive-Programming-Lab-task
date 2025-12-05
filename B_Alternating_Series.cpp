//https://codeforces.com/contest/2131/problem/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; cin >> n;
    if (n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                cout << -1 << " ";
            
            else
                cout << 3 << " ";
    
        }
        cout << "\n";
    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            if (i % 2 == 0) cout << -1 << " ";
            
            else cout << 3 << " ";
            
        }
        cout <<-1<<" "<<2<<"\n";
    }
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