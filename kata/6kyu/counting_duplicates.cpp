/*
  codewars.com
  Problem: Counting duplicates
  22/06/2019
*/

#include <bits/stdc++.h>

size_t duplicateCount(const std::string& in); // helper for tests

int digit(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    return -1;
}

int alpha(char c) {
    if (c >= 'a' && c <= 'z')
        return c - 'a';
    if (c >= 'A' && c <= 'Z')
        return c - 'A';
    return -1;
}

size_t duplicateCount(const char* s) {
    std::map<char, int> d;
    std::map<char, int> c;
    std::size_t i = 0;
    while (s[i] != '\0') {
        int k = digit(s[i]);
        if (k != -1)
            ++d[k];
        k = alpha(s[i]);
        if (k != -1)
            ++c[k];
        ++i;
    }

    int r = 0;
    for (auto it = d.begin(); it != d.end(); ++it)
        if (it->second > 1)
            ++r;
    for (auto it = c.begin(); it != c.end(); ++it)
        if (it->second > 1)
            ++r;
    return r;
}

int main() {
    printf("%llu\n", duplicateCount(" "));
    printf("%llu\n", duplicateCount(""));
    printf("%llu\n", duplicateCount("aabbcde"));
    printf("%llu\n", duplicateCount("aabBcde"));
    printf("%llu\n", duplicateCount("Indivisibility"));
    printf("%llu\n", duplicateCount("Indivisibilities"));
    printf("%llu\n", duplicateCount("ABBA"));

    return 0;
}
