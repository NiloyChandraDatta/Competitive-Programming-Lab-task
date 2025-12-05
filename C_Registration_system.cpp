//https://codeforces.com/contest/4/problem/C
/*
 *    niloy
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n ; cin >> n;
    map<string , int>mp;
    for(int i = 0; i < n ; i++)
    {
        string st ; cin >> st;
        if(mp.find(st) == mp.end())
        {
            cout <<"OK"<< endl;
            mp[st] = 1;
        }
        else 
        {
            string new_st = st+ to_string(mp[st]);
            cout << new_st << endl;
            mp[st]++;
            mp[new_st] = 1;
        }
    }
}
int32_t main()
{
    int tc = 1; cin >> tc;
    while(tc--)
    {
        solve();
    }
}

//4
// abacaba
// acaba
// abacaba
// acab
