#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int mx = 0;

    for(int &x : a)
    {
        cin >> x;
        if(x > mx) mx = x;
    }

    vector<int> f(mx + 1, 0);

    for(int x : a)
    {
        f[x]++;
    }

    for(int g = mx; g >= 1; g--)
    {
        int c = 0;

        for(int k = g; k <= mx; k += g)
        {
            c += f[k];
        }

        if(c >= 2)
        {
            cout << g;
            return 0;
        }
    }
}
