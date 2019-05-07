/*
  codewars.com
  Problem: Shortest word
  07/05/2019
*/

#include <bits/stdc++.h>

int find_short(std::string s) {
    std::istringstream iss(s);
    std::string w;

    int m = 1e+9;
    while (iss >> w)
        if (w.size() < m)
            m = w.size();

    return m;
}

int main() {
    printf("%d\n", find_short("bitcoin take over the world maybe who knows perhaps"));
    printf("%d\n", find_short("turns out random test cases are easier than writing out basic ones"));
    printf("%d\n", find_short("lets talk about javascript the best language"));
    printf("%d\n", find_short("i want to travel the world writing code one day"));
    printf("%d\n", find_short("Lets all go on holiday somewhere very cold"));

    return 0;
}
