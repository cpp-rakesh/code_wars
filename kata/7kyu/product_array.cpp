/*
  codewars.com
  Problem: product array
  23/06/2019
*/

#include <bits/stdc++.h>

using vec = std::vector<int>;

std::vector<int> productArray (std::vector <int> n) {
    double p = 1.0f;
    for (std::size_t i = 0; i < n.size(); ++i)
        p *= n[i];

    std::vector<int> r;
    for (std::size_t i = 0; i < n.size(); ++i)
        r.push_back(p / n[i]);

    return r;
}

void print(const std::vector<int>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    print(productArray(vec{12,20}));
    print(productArray(vec{1,5,2}));
    print(productArray(vec{3,27,4,2}));
    print(productArray(vec{13,10,5,2,9}));
    print(productArray(vec{16,17,4,3,5,2}));

    return 0;
}
