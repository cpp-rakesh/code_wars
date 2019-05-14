/*
  codewars.com
  Problem: Simple fun 176 reverse letter
  14/05/2019
*/

#include <bits/stdc++.h>

void swap(char& a, char& b) {
    const char t = a;
    a = b;
    b = t;
}

std::string reverse_letter(const std::string &s) {
    std::string r = s;
    int i = 0;
    int j = r.size() - 1;

    while (i < j)
        swap(r[i++], r[j--]);

    std::string t;
    for (std::size_t i = 0; i < r.size(); ++i)
        if (r[i] >= 'a' && r[i] <= 'z')
            t += r[i];

    return t;
}

int main() {
    printf("%s\n", reverse_letter("krishan").c_str());
    printf("%s\n", reverse_letter("ultr53o?n").c_str());
    printf("%s\n", reverse_letter("ab23c").c_str());
    printf("%s\n", reverse_letter("krish21an").c_str());

    return 0;
}
