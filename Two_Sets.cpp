#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    ll n; cin >> n;
    ll S = n * (n + 1) / 2;

    if (S % 2 != 0) 
    {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    ll target = S / 2;
    vector<ll> set1, set2;

    for (long long i = n; i >= 1; i--) 
    {
        if (target >= i) {
            set1.push_back(i);
            target -= i;
        } 
        else 
        {
            set2.push_back(i);
        }
    }

    cout << set1.size() << "\n";
    for (auto x : set1) cout << x << " ";
    cout << "\n";

    cout << set2.size() << "\n";
    for (auto x : set2) cout << x << " ";
    cout << "\n";

    return 0;
}
