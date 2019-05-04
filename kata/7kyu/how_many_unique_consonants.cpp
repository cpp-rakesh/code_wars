/*
  codewars.com
  Problem: How many unique consonats
  05/05/2019
*/

#include <bits/stdc++.h>

inline bool consonants(char c) {
    return !(c == 'a' || c == 'A' ||
             c == 'e' || c == 'E' ||
             c == 'i' || c == 'I' ||
             c == 'o' || c == 'O' ||
             c == 'u' || c == 'U');
}

unsigned int countConsonants(const std::string& s) {
    std::vector<bool> d(26, false);
    for (std::size_t i = 0; i < s.size(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (consonants(s[i]))
                d[s[i] - 'a'] = true;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            if (consonants(s[i]))
                d[s[i] - 'A'] = true;
        }
    }

    unsigned int c = 0;
    for (std::size_t i = 0; i < d.size(); ++i)
        if (d[i]) ++c;
    return c;
}

int main() {
    printf("%u\n", countConsonants("sillystring"));
    printf("%u\n", countConsonants("abcdefghijklmnopqrstuvwxyz"));
    printf("%u\n", countConsonants("Count my unique consonants!!"));
    printf("%u\n", countConsonants(""));

    return 0;
}
