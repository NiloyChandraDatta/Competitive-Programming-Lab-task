
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main()
{
    int n ; cin >> n ; 
    map<int , int>mp;
    for(int i = 0; i < n ; i++)
    {
        int m ; cin >>m;
        mp[m]++;
    }
    for(auto t : mp)
    {
        cout << t.first << " " << t.second << endl;

    }
}

