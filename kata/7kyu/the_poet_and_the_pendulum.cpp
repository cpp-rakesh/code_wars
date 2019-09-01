/*
  codewars.com
  Problem: The poet and the pendulum
  01/09/2019
*/

#include <bits/stdc++.h>

std::vector<int> Pendulum(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    std::vector<int> r(v.size(), 0);

    int m = v.size() & 1 ? v.size() >> 1 : (v.size() >> 1) - 1;
    r[m] = v[0];
    for (std::size_t i = 1; i < v.size(); ++i) {
        m = i & 1 ? m + i : m - i;
        r[m] = v[i];
    }
    return r;
}

inline void print(const std::vector<int>& v) {
    for (const auto& x : v)
        printf("%d ", x);
    printf("\n");
}

int main() {
    print(Pendulum(std::vector<int>({4,10,9})));
    print(Pendulum(std::vector<int>({8,7,10,3})));
    print(Pendulum(std::vector<int>({6,6,8,5,10})));
    print(Pendulum(std::vector<int>({9,4,6,4,10,5})));
    print(Pendulum(std::vector<int>({4,6,8,7,5})));
    print(Pendulum(std::vector<int>({10,5,6,10})));
    print(Pendulum(std::vector<int>({11,12,12})));

    return 0;
}
