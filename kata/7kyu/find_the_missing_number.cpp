/*
  codewars.com
  Problem: Find the missing number
  17/05/2019
*/

#include <bits/stdc++.h>

int missingNo(std::vector<int> a){
    int s = 0;
    for (std::size_t i = 0; i < a.size(); ++i)
        s += a[i];
    return 5050 - s;
}

inline void swap(int& a, int& b) {
    const int t = a;
    a = b;
    b = t;
}

inline std::vector<int> get_numbers() {
    std::vector<int> v;
    for (int i = 1; i <= 100; ++i)
        v.push_back(i);

    std::random_device rd;
    for (int i = v.size() - 1; i >= 0; --i) {
        std::uniform_int_distribution<> dt(0, i);
        const int p = dt(rd);
        if (i != p)
            swap(v[i], v[dt(rd)]);
    }
    v.erase(v.begin() + v.size() - 1);
    return v;
}

inline void print(const std::vector<int>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    std::vector<int> v = get_numbers();
    print(v);
    printf("%d\n", missingNo(v));

    return 0;
}
