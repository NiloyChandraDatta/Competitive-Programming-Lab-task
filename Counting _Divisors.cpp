#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_X = 1000001;
int num_divisors[MAX_X] = {0};

void precompute_divisors() {
    for (int i = 1; i < MAX_X; i++) {
        for (int j = i; j < MAX_X; j += i) {
            num_divisors[j]++;
        }
    }
}

void solve() 
{
    int n; cin >> n;
    cout << num_divisors[n] << "\n";
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute_divisors();
    
    int tc; cin >> tc;
    while(tc--) 
    {
        solve();
    }
    return 0;
}