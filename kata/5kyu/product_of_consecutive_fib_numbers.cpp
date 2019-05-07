#include <bits/stdc++.h>

typedef unsigned long long ull;

class ProdFib
{
public:
    static ull fib(int n) {
        const double t = std::sqrt(5);
        const double a = 1 / t;
        const double b = std::pow((1 + t) / 2, n);
        const double c = std::pow((1 - t) / 2, n);
        return (a * b) - (a * c);
    }

    static std::vector<ull> productFib(ull p) {
        int n = 0;
        while (1) {
            const ull a = fib(n);
            const ull b = fib(n + 1);
            if (a * b == p) {
                std::vector<ull> v = {a, b, 1};
                return v;
            }

            if (a * b > p) {
                std::vector<ull> v = {a, b, 0};
                return v;
            }
            ++n;
        }
    }

};

int main() {
    std::vector<ull> v = ProdFib::productFib(4895);
    printf("%llu %llu %llu\n", v[0], v[1], v[2]);
    v = ProdFib::productFib(5895);
    printf("%llu %llu %llu\n", v[0], v[1], v[2]);
    v = ProdFib::productFib(74049690);
    printf("%llu %llu %llu\n", v[0], v[1], v[2]);
    v = ProdFib::productFib(84049690);
    printf("%llu %llu %llu\n", v[0], v[1], v[2]);

    return 0;
}
