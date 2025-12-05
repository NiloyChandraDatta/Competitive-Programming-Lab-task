#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

long long nextPrime(long long n)
{
    while (!isPrime(n))
    {
        n++;
    }
    return n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        long long n;
        cin >> n;
        cout << nextPrime(n + 1) << "\n";
    }
}
