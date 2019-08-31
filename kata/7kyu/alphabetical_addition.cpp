/*
  codewars.com
  Problem: Alphabetical addition
  01/09/2019
*/

#include <bits/stdc++.h>

char add_letters(std::vector<char> l) {
    if (l.size() == 0)
        return 'z';
    long sum = 0;
    for (const auto& c : l)
        sum += c - 'a' + 1;
    if (sum % 26 == 0)
        return 'z';
    else
        return ((sum % 26) + 'a') - 1;
}

int main() {
    std::vector<char> l = {'a', 'b', 'c'};
    printf("%c\n", add_letters(l));
    l = {'z'};
    printf("%c\n", add_letters(l));
    l = {'a', 'b'};
    printf("%c\n", add_letters(l));

    return 0;
}
