#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int sz = 2 * n;
    vector<int> count(sz + 1, 0);
    for (int i = 0; i < sz; ++i)
    {
        int x; cin >> x;
        count[x]++;
    }
    int oddCnt = 0;
    int evenCnt = 0;
    for (int i = 1; i <= sz; ++i)
    {
        if (count[i] > 0)
        {
            if (count[i] % 2 != 0)
            {
                oddCnt++;
            }
            else
            {
                evenCnt++;
            }
        }
    }
    if (oddCnt == 0)
    {
        if (evenCnt % 2 == n % 2)
        {
            cout << 2 * evenCnt << "\n";
        }
        else
        {
            cout << 2 * evenCnt - 2 << "\n";
        }
    }
    else
    {
        cout << oddCnt + 2 * evenCnt << "\n";
    }
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