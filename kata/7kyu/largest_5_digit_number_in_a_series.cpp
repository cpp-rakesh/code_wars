/*
  codewars.com
  Problem: Largest 5 digit number in a series
  06/06/2020
*/

#include <bits/stdc++.h>

int largest_five_digits(const std::string& digits) {
    std::string r = digits.substr(0, 5);
    for (std::size_t i = 1; i <= digits.size() - 5; ++i)
        r = std::max(r, digits.substr(i, 5));

    return std::atoi(r.c_str());
}

int main() {
    printf("%d\n", largest_five_digits("283910"));
    printf("%d\n", largest_five_digits("1234567890"));

    return 0;
}
