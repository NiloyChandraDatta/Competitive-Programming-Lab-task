/*
    niloy
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int32_t main()
{
    int n ; cin >> n;
    set<int> st;
    for(int i = 0; i < n ; i++)
    {
        int m ; cin >> m;
        st.insert(m);
    }
    for(auto t : st)
    {
        cout << t << " ";
    }
    

}