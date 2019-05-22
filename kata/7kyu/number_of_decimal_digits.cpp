/*
  codewars.com
  Problem: Number of decimal digits
  23/05/2019
*/

#include <bits/stdc++.h>

int digits(uint64_t n) {
    return std::to_string(n).size();
}

int main() {
    printf("%d\n", digits(5ull));
    printf("%d\n", digits(12345ull));
    printf("%d\n", digits(9876543210ull));

    return 0;
}
