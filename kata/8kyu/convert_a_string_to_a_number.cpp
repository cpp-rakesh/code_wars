/*
  codewars.com
  Problem: convert a string to a number
  22/06/2019
*/

#include <cstdio>
#include <cmath>
#include <string>

int string_to_number(const std::string& s) {
    int n = 0;
    for (std::size_t i = s.size() - 1; i > 0; --i)
        n += ((s[i] - '0') * std::pow(10, s.size() - 1 - i));

    if (s[0] == '-')
        n *= -1;
    else
        n += ((s[0] - '0') * std::pow(10, s.size() - 1));
    return n;
}

int main() {
    printf("%d\n", string_to_number("123456"));
    printf("%d\n", string_to_number("352605"));
    printf("%d\n", string_to_number("-321405"));
    printf("%d\n", string_to_number("-7"));
    printf("%d\n", string_to_number("0"));
    printf("%d\n", string_to_number("-0"));

    return 0;
}
