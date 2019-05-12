/*
  codewars.com
  Problem: Steps in primes
  13/05/2019
*/

#include <bits/stdc++.h>

using PR = std::pair<long long, long long>;

class StepInPrimes
{
public:
    // if there are no such primes return {0, 0}
    static bool is_prime(long long n) {
        if (n < 2)
            return false;
        for (long long i = 2; i * i <= n; ++i)
            if (n % i == 0)
                return false;
        return true;
    }

    static PR step(int g, long long m, long long n) {
        std::vector<long long> primes;
        for (long long i = m; i <= n; ++i) {
            if (is_prime(i)) {
                for (std::size_t j = 0; j < primes.size(); ++j) {
                    if (i - primes[j] == g)
                        return PR(primes[j], i);
                }
                primes.push_back(i);
            }
        }
        return PR();
    }
};

int main() {
    PR a = StepInPrimes::step(2, 100, 110);
    printf("%lld %lld\n", std::get<0>(a), std::get<1>(a));
    a = StepInPrimes::step(11, 30000, 100000);
    printf("%lld %lld\n", std::get<0>(a), std::get<1>(a));
    a = StepInPrimes::step(2, 2, 50);
    printf("%lld %lld\n", std::get<0>(a), std::get<1>(a));
    a = StepInPrimes::step(4, 100, 110);
    printf("%lld %lld\n", std::get<0>(a), std::get<1>(a));
    a = StepInPrimes::step(6, 100, 110);
    printf("%lld %lld\n", std::get<0>(a), std::get<1>(a));
    a = StepInPrimes::step(8, 300, 400);
    printf("%lld %lld\n", std::get<0>(a), std::get<1>(a));
    a = StepInPrimes::step(10, 300, 400);
    printf("%lld %lld\n", std::get<0>(a), std::get<1>(a));

    return 0;
}
