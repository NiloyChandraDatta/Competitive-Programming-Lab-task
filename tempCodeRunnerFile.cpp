// https://codeforces.com/contest/2153/problem/A
// Codeforces Round 1057 (Div. 2)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n; cin >> n;
    set<int>st;
    for (int i = 0; i < n; ++i)
    {
        int m; cin >>m;
        st.insert(m);
    }
    cout << st.size() << endl;
}

int main()
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