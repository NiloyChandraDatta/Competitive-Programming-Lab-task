#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int curr = 1, best = 1;
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1]) curr++;
        else curr = 1;
        best = max(best, curr);
    }
    cout << best << "\n";
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
