/*
  codewars.com
  Problem: Primorial of a number
  23/05/2019
*/

#include <bits/stdc++.h>

unsigned long long numPrimorial (unsigned short int number ) {
    std::vector<bool> p(100, true);
    for (int i = 2; i < p.size(); ++i)
        if (p[i])
            for (int j = 2 * i; j < p.size(); j += i)
                p[j] = false;

    std::vector<int> primes;
    for (int i = 2; i < p.size(); ++i)
        if (p[i])
            primes.push_back(i);

    unsigned long long n = 1;
    for (unsigned short int i = 0; i < number; ++i)
        n *= primes[i];

    return n;
}

int main() {
    printf("%llu\n", numPrimorial(3));
    printf("%llu\n", numPrimorial(4));
    printf("%llu\n", numPrimorial(5));
    printf("%llu\n", numPrimorial(8));
    printf("%llu\n", numPrimorial(9));

    return 0;
}
