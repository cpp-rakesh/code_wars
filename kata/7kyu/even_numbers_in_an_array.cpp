/*
  codewars.com
  Problem: Even numbers in an array
  21/05/2019
*/

#include <bits/stdc++.h>

std::vector<int> evenNumbers(std::vector<int> a, int n) {
    std::vector<int> r(n, 0);
    int k = n - 1;
    for (int i = a.size() - 1; i >= 0 & k >= 0; --i)
        if ((a[i] & 1) == 0)
            r[k--] = a[i];
    return r;
}

inline void print(const std::vector<int>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    using V = std::vector<int>;
    print(evenNumbers(V{1, 2, 3, 4, 5, 6, 7, 8, 9}, 3));
    print(evenNumbers(V{-22, 5, 3, 11, 26, -6, -7, -8, -9, -8, 26}, 2));
    print(evenNumbers(V{6, -25, 3, 7, 5, 5, 7, -3, 23}, 1));
    print(evenNumbers(V{1, 2, 3, 4, 5, 6, 7, 8, 9}, 4));
    print(evenNumbers(V{1, 3, 5, 7, 9}, 0));

    return 0;
}
