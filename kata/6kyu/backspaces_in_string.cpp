/*
  codewars.com
  Problem: Backspace in string
  26/12/2019
*/

#include <bits/stdc++.h>

inline void swap(char& a, char& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

std::string cleanString(const std::string &s) {
    std::string r;
    int backspace = 0;
    for (int i = s.size() - 1; i >= 0; --i) {
        if (s[i] == '#') {
            ++backspace;
        } else {
            if (backspace == 0)
                r.push_back(s[i]);
            if (backspace > 0)
                --backspace;
        }
    }

    int i = 0;
    int j = r.size() - 1;
    for (; i < j; ++i, --j)
        swap(r[i], r[j]);
    return r;
}

int main() {
    printf("%s\n", cleanString("a#bc#d").c_str());
    printf("%s\n", cleanString("abc#d##c").c_str());
    printf("%s\n", cleanString("abc##d######").c_str());
    printf("%s\n", cleanString("#######").c_str());

    return 0;
}
