#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int maxN = 2e5+1;

void solve()
{
    int n;
    cin >> n;
    int pos[maxN];
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int cnt = 1;
    for(int i = 2; i <= n; i++)
    {
        if(pos[i-1] > pos[i]) cnt++;
    }
    cout << cnt << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1; // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
