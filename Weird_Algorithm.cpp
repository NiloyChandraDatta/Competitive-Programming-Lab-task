#include<bits/stdc++.h>
using namespace std;
#define ll long long

void rec(ll n)
{
    if(n == 1)  
    {
        return;
        
    }
    
    else if(n % 2 == 1)
    {
        n = n*3 + 1;
        cout << n << " " ;
        rec(n);
    }
    else
    {
        n = n/2;
        cout << n << " ";
        rec(n);
    }

}

int main()
{
    ll n ; cin >> n;
    cout << n << " ";
    rec(n);
}
