/*
  codewars.com
  Problem: Minimum ticket cost
  08/05/2019
*/

#include <bits/stdc++.h>

int findJane(const int n) {
    return std::ceil(n / static_cast<double>(2)) - 1;
}

int main() {
    printf("%d\n", findJane(2));
    printf("%d\n", findJane(10));

    return 0;
}
