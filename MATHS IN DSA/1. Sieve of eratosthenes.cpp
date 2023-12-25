#include <bits/stdc++.h>
using namespace std;

// Sieve of Erasthenes
int countPrimes(int n)
{

    int count = 0; // count of all primes < n

    vector<bool> primes(n + 1, true); // mark all true

    // handle base (edges)
    primes[0] = primes[1] = false;

    for (int i = 2; i < n; i++)
    {

        // non-primes skipped
        if (primes[i])
        {
            count++;

            // mark all multiples non-prime (i*2.........)
            for (int j = 2 * i; j < n; j = j + i)
                primes[j] = false;
        }
    }

    //can easily print all primes now
    for(int i=0; i<n; i++){
        if(primes[i])
            cout << i << " ";
    }
    cout << endl;

    return count;
}

int main()
{

    int n;
    cin >> n;

    cout << "count : " << countPrimes(n);
}