/*
  codewars.com
  Problem: Eliminate the intruders! bit manipulation
  01/09/2019
*/

#include <bits/stdc++.h>

long eliminate_unset_bits(std::string n) {
    int c = 0;
    for (const auto& x : n)
        if (x == '1')
            ++c;
    return std::pow(2, c) - 1;
}

int main() {
    printf("%lld\n", eliminate_unset_bits("11010101010101"));

    return 0;
}
