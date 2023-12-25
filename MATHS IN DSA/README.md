# Maths Concepts (must be known)

## Sieve of Eratosthenes
> The sieve of Eratosthenes is one of the most efficient ways to find all primes   smaller than n when n is smaller than 10 million or so
> The time complexity of Sieve of Eratosthenes is **n*log(log(n))**
> Taylor Series <=> Harmonic Progression of (1/prime + .....)

> add image here

```C++
    int countPrimes(int n) {
        
    int count = 0;  //count of all primes < n

    vector<bool> primes(n+1, true); //mark all true

    //handle base (edges)
    primes[0] = primes[1] = false;

    for(int i=2; i<n; i++){
        //non-primes skipped
           if(primes[i]){
              count++;

              //mark all multiples non-prime (i*2.........)
              for(int j = 2*i; j<n; j=j+i)
                primes[j] = false;
            }
    }
    return count;
    }

```

## Segmented Sieve

> BLANK FOR NOW

## GCD - Euclid's Algorithm

> **GCD (a, b) = GCD(a-b, b); => GCD(a%b, b)**

> **LCM (a, b) x GCD (a, b) = a*b**

## Modular Arithmetics
## Pigeon Hole Principle
## Catalan Number -> Binary Tree
## Inclusion Exclusion