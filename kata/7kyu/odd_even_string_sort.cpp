/*
  codewars.com
  Problem: Odd even string sort
  05/05/2019
*/

#include <bits/stdc++.h>

std::string sortMyString(const std::string& s) {
    std::string r;

    for (std::size_t i = 0; i < s.size(); i += 2)
        r.push_back(s[i]);

    r.push_back(' ');

    for (std::size_t i = 1; i < s.size(); i += 2)
        r.push_back(s[i]);

    return r;
}

int main() {
    printf("%s\n", sortMyString("CodeWars").c_str());
    printf("%s\n", sortMyString("YCOLUE'VREER").c_str());

    return 0;
}
