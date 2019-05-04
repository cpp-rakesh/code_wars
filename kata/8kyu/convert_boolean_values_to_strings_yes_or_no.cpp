/*
  codewars.com
  Problem: Convert boolean values to strings yes or no
  05/05/2019
*/

#include <bits/stdc++.h>

std::string bool_to_word(bool v) {
    return v ? "Yes" : "No";
}

int main() {
    printf("%s\n", bool_to_word(true).c_str());
    printf("%s\n", bool_to_word(false).c_str());

    return 0;
}
