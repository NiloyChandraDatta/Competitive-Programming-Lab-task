#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int y; cin >> y;
    while (true)
    {
        y++;
        int curr = y;
        int a = curr / 1000;
        int b = (curr / 100) % 10;
        int c = (curr / 10) % 10;
        int d = curr % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << curr << "\n";
            return;
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}