/*
  codewars.com
  Problem: Shift Left
  04/05/2019
*/

#include <bits/stdc++.h>

long long shiftLeft(std::string s, std::string t) {
    int i = s.size() - 1;
    int j = t.size() - 1;

    while (i >= 0 && j >= 0) {
        if (s[i] != t[j])
            break;
        --i; --j;
    }

    return i + j + 2;
}

int main() {
    printf("%lld\n", shiftLeft("test","west"));
    printf("%lld\n", shiftLeft("test","yes"));
    printf("%lld\n", shiftLeft("b","ab"));
    printf("%lld\n", shiftLeft("abacabadabacaba","abacabadacaba"));
    printf("%lld\n", shiftLeft("aaabc","bc"));
    printf("%lld\n", shiftLeft("ahmedaly","aly"));
    printf("%lld\n", shiftLeft("dadc","dddc"));
    return 0;
}
