/*
  codewars.com
  Problem: Sums of parts
  20/06/2019
*/

#include <bits/stdc++.h>

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls) {
    std::vector<unsigned long long> r(ls.size() + 1, 0);

    unsigned long long sum = 0;
    for (int i = ls.size() - 1; i >= 0; --i) {
        sum += ls[i];
        r[i] = sum;
    }
    return r;
}

void print(const std::vector<unsigned long long>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%lld ", v[i]);
    printf("\n");
}

int main() {
    std::vector<unsigned long long> v = {0, 1, 3, 6, 10};
    print(partsSum(v));

    v = {1, 2, 3, 4, 5, 6};
    print(partsSum(v));

    return 0;
}
