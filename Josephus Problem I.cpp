#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n; cin >> n;
    queue<int>q;
    for(int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    
    while(q.size() > 1)
    {
        int curr = q.front();
        q.pop();
        q.push(curr);
        cout << q.front() << " ";
        q.pop();
    }
    cout << q.front() << "\n";
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
