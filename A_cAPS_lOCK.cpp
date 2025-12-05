#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s; cin >> s;
    if (all_of(s.begin(), s.end(), ::isupper))
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if (islower(s[0]) && all_of(s.begin() + 1, s.end(), ::isupper))
    {
        s[0] = toupper(s[0]);
        transform(s.begin() + 1, s.end(), s.begin() + 1, ::tolower);
    }
    cout << s << endl;
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