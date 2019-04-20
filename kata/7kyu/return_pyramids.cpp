/*
  codewars.com
  Problem: return pyramids
  21/04/2019
*/

#include <bits/stdc++.h>

std::string pyramid(int n){
    std::string r;

    if (n == 1)
        return "/\\\n";

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            r += ' ';
        r += "/";
        for (int j = 0; j < i << 1; ++j)
            r += ' ';
        r += "\\\n";
    }

    r += "/";
    for (int i = 0; i < (n - 1) << 1; ++i)
        r += "_";
    r += "\\\n";

    return r;
}


int main() {
    printf("%s", pyramid(10).c_str());
    return 0;
}
