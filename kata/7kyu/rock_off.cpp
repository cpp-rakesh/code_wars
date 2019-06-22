/*
  codewars.com
  Problem: Rock off !!!
  22/06/2019
*/

#include <bits/stdc++.h>

std::string solve_rock_off(const std::vector<int> &a, const std::vector<int> &b) {
    int a_w = 0;
    int b_w = 0;
    for (std::size_t i = 0; i < a.size(); ++i)
        if (a[i] > b[i])
            ++a_w;
        else if (a[i] < b[i])
            ++b_w;

    std::ostringstream oss;
    oss << a_w << ", " << b_w << ": ";
    if (a_w == b_w)
        oss << "that looks like a \"draw\"! Rock on!";
    else if (a_w > b_w)
        oss << "Alice made \"Kurt\" proud!";
    else
        oss << "Bob made \"Jeff\" proud!";

    return oss.str();
}

int main() {
    printf("%s\n", solve_rock_off({47, 7, 2}, {47, 7, 2}).c_str());
    printf("%s\n", solve_rock_off({47, 67, 22}, {26, 47, 12}).c_str());
    printf("%s\n", solve_rock_off({25, 50, 22}, {34, 49, 50}).c_str());

    return 0;
}
