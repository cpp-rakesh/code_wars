/*
  codewars.com
  Problem: sum factorial
  21/04/2019
*/

#include <bits/stdc++.h>

#define llu unsigned long long int

llu f(int n) {
    unsigned long long int r = 1;
    for (int i = n; i > 1; --i)
        r *= i;
    return r;
}

llu sum_factorial(std::vector<int> v) {
    llu s = 0;

    int m = v[0];
    for (std::size_t i = 1; i < v.size(); ++i)
        m = std::min(m, v[i]);

    s = f(m);

    llu t = 0;
    llu o = 0;
    for (std::size_t i = 0; i < v.size(); ++i) {
        if (v[i] == 1) {
            ++o;
        } else if (v[i] == m) {
            ++t;
        } else {
            llu k = 1;
            for (int p = v[i]; p > m; --p)
                k *= p;
            t += k;
        }
    }

    return (s * t) + o;
}

int main() {
    std::vector<int> v = {4, 6};
    printf("%llu\n", sum_factorial(v));
    v = {4, 5, 1};
    printf("%llu\n", sum_factorial(v));
    return 0;
}
