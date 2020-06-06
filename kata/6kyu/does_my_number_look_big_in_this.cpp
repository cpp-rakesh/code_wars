/*
  codewars.com
  Problem: Sum of digits/digital root
  06/06/2020
*/

#include <bits/stdc++.h>

bool narcissistic( int value ) {
    const std::size_t n = std::to_string(value).size();
    unsigned long long int s = 0;
    int m = value;
    while (m) {
        s += std::pow(m % 10, n);
        m /= 10;
    }

    return s == value;
}

int main() {
    printf("%d\n", narcissistic(371));
    printf("%d\n", narcissistic(122));
    printf("%d\n", narcissistic(4887));

    return 0;
}
