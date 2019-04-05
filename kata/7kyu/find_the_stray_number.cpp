/*
  codewars.com
  Problem: find the stray number
  06/05/2019
*/

#include <bits/stdc++.h>

int stray(std::vector<int> n) {
    int r = 0;
    for (std::size_t i = 0; i < n.size(); ++i)
        r ^= n[i];
    return r;
};

int main() {
    std::vector<int> v = {1, 1, 2};
    printf("%d\n", stray(v));

    return 0;
}
