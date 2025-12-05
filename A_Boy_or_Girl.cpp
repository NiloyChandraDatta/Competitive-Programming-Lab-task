// https://codeforces.com/contest/236/problem/A
// Codeforces Round 146 (Div. 2)

#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string s; cin >> s;
    set<char>st;
    for(auto c : s) 
    {
        st.insert(c);
    }
    if(st.size() % 2 == 0) 
    {
        cout << "CHAT WITH HER!";
    }
    else 
    {
        cout << "IGNORE HIM!";
    }
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