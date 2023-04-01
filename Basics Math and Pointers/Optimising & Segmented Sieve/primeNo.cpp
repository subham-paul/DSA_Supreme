#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> sieve(int n)
{
    // create a sieve array of n size telling isPrime
    vector<bool> _sieve(n + 1, true);
    _sieve[0] = _sieve[1] = false;

    for (int i = 2; i * i <= n; i++) // Optimisation 2, OuterLoop i<=root n
    {
        if (_sieve[i] == true)
        {
            // int j = i * 2;
            int j = i * i; // Optimisation 1
            // First unMarked number would be i*i, as others have been marked by 2 to (i-1)
            while (j <= n)
            {
                _sieve[j] = false;
                j += i;
            }
        }
    }
    return _sieve;
}

vector<bool> segSieve(int L, int R)
{
    // get me prime array, I will use it to mark seg sieve.
    vector<bool> _sieve = sieve(sqrt(R));
    vector<int> basePrimes;
    for (int i = 0; i < _sieve.size(); i++)
    {
        if (_sieve[i])
        {
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R - L + 1, true);
    if (L == 1 || L == 0)
    {
        segSieve[L] = false;
    }

    for (auto prime : basePrimes)
    {
        int first_mul = (L / prime) * prime;
        if (first_mul < L)
        {
            first_mul += prime;
        }
        int j = max(first_mul, prime * prime);
        while (j <= R)
        {
            segSieve[j - L] = false;
            j += prime;
        }
    }
    return segSieve;
}

int main()
{
    // vector<bool> _sieve = sieve(25);
    // for (int i = 0; i <= 25; i++)
    // {
    //     if (_sieve[i])
    //     {
    //         cout << i << " ";
    //     }
    // }
    int L = 110;
    int R = 130;
    vector<bool> ss = segSieve(L, R);
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i])
        {
            cout << i + L << " ";
        }
    }
    cout << endl;
    return 0;
}