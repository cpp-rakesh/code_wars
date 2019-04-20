/*
  codewars.com
  Problem: splitting numbers
  21/04/2019
*/

#include <bits/stdc++.h>

inline std::string to_binary(int n) {
    std::string b;
    while (n) {
        b += (n % 2) + '0';
        n >>= 1;
    }

    return b;
}

inline std::pair<int, int> to_decimal(const std::string& s) {
    std::string a;
    std::string b;

    int c = 1;
    for (std::size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '1') {
            if (c % 2) {
                a += '1';
                b += '0';
            } else {
                b += '1';
                a += '0';
            }
            ++c;
        } else {
            a += '0';
            b += '0';
        }
    }

    int na = 0;
    for (std::size_t i = 0; i < a.size(); ++i)
        if (a[i] == '1')
            na += (1 << i);

    int nb = 0;
    for (std::size_t i = 0; i < b.size(); ++i)
        if (b[i] == '1')
            nb += (1 << i);

    return std::pair<int, int>(na, nb);
}

std::pair<int, int> splitNumbers(int n){
    return to_decimal(to_binary(n));
}

int main() {
    std::pair<int, int> p = splitNumbers(6);
    printf("%d %d\n", std::get<0>(p), std::get<1>(p));
    p = splitNumbers(7);
    printf("%d %d\n", std::get<0>(p), std::get<1>(p));
    p = splitNumbers(13);
    printf("%d %d\n", std::get<0>(p), std::get<1>(p));
    return 0;
}
