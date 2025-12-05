//https://codeforces.com/contest/118/problem/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string st; cin >> st;
    string s = "";
    int i = 0;
    while (st[i] != '\0')
    {
        char c = tolower((unsigned char)st[i]);
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'i' || c == 'u')
        {
            i++;
            continue;
        }
        s += '.';
        s += c;
        i++;
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