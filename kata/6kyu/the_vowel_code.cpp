/*
  codewars.com
  Problem: The vowel code
  06/06/2020
*/

#include <bits/stdc++.h>

std::string encode(const std::string &str) {
    std::string s = str;
    for (std::size_t i = 0; i < str.size(); ++i) {
        if (s[i] == 'a')
            s[i] = '1';
        else if (s[i] == 'e')
            s[i] = '2';
        else if (s[i] == 'i')
            s[i] = '3';
        else if (s[i] == 'o')
            s[i] = '4';
        else if (s[i] == 'u')
            s[i] = '5';
    }

    return s;
}

std::string decode(const std::string &str) {
    std::string s = str;
    for (std::size_t i = 0; i < str.size(); ++i) {
        if (s[i] == '1')
            s[i] = 'a';
        else if (s[i] == '2')
            s[i] = 'e';
        else if (s[i] == '3')
            s[i] = 'i';
        else if (s[i] == '4')
            s[i] = 'o';
        else if (s[i] == '5')
            s[i] = 'u';
    }
    return s;
}

int main() {
    printf("%s\n", encode("hello").c_str());
    printf("%s\n", encode("How are you today?").c_str());
    printf("%s\n", encode("This is an encoding test.").c_str());
    printf("%s\n", decode("h2ll4").c_str());
    printf("%s\n", decode("H4w 1r2 y45 t4d1y?").c_str());
    printf("%s\n", decode("Th3s 3s 1n 2nc4d3ng t2st.").c_str());

    return 0;
}
