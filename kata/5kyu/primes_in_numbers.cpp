/*
  codewars.com
  Problem: Primes in numbers
  13/05/2019
*/

#include <bits/stdc++.h>

class PrimeDecomp
{
public:
    static bool is_prime(int n) {
        for (int i = 2; i * i <= n; ++i)
            if (n % i == 0)
                return false;
        return true;
    }

    static std::string factors(int n) {
        if (is_prime(n))
            return "(" + std::to_string(n) + ")";

        std::string r;
        for (int i = 2; i <= n; ++i) {
            if (is_prime(i)) {
                if (n % i == 0) {
                    int c = 0;
                    while (n % i == 0) {
                        n /= i;
                        ++c;
                    }

                    if (c == 1)
                        r += "(" + std::to_string(i) + ")";
                    else if (c > 1)
                        r += "(" + std::to_string(i) + "**" + std::to_string(c) + ")";
                }
            }
        }

        return r;
    }
};


int main() {
    printf("%s\n", PrimeDecomp::factors(7775460).c_str());
    printf("%s\n", PrimeDecomp::factors(7919).c_str());

    return 0;
}
