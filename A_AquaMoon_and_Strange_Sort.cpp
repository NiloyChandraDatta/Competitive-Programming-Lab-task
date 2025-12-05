#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> a(n);
    vector<int> even1, odd1;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            even1.push_back(a[i]);
        }
        else
        {
            odd1.push_back(a[i]);
        }
    }

    vector<int> s_arr = a;
    sort(s_arr.begin(), s_arr.end());

    vector<int> even2, odd2;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            even2.push_back(s_arr[i]);
        }
        else
        {
            odd2.push_back(s_arr[i]);
        }
    }

    sort(even1.begin(), even1.end());
    sort(odd1.begin(), odd1.end());

    if (even1 == even2 && odd1 == odd2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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