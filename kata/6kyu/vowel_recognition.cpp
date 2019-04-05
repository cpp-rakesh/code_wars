/*
  codewars.com
  Problem: find the stray number
  06/05/2019
*/

#include <bits/stdc++.h>

inline bool vowel(char c) {
    if (c == 'a' || c == 'A' ||
        c == 'e' || c == 'E' ||
        c == 'i' || c == 'I' ||
        c == 'o' || c == 'O' ||
        c == 'u' || c == 'U')
        return true;
    return false;
}

uint64_t vowelRecognition(const std::string &s) {
    uint64_t t = 0;
    for (int i = 0; i < s.size(); ++i)
        if (vowel(s[i]))
            t += ((s.size() - i) * (i + 1));
    return t;
}
