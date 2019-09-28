/*
  codewars.com
  Problem: Fill the hard disk drive
  28/09/2019
*/

#include <bits/stdc++.h>

int save(std::vector<int> sizes, int hd) {
  int t = 0;
  for (std::size_t i = 0; i < sizes.size(); ++i) {
    t += sizes[i];
    if (t > hd)  return i;
  }
  return sizes.size();
}

int main() {
    using vec = std::vector<int>;
    printf("%lu\n", save(vec{4,4,4,3,3}, 12));
    printf("%lu\n", save(vec{4,4,4,3,3}, 11));
    printf("%lu\n", save(vec{4,8,15,16,23,42}, 108));
    printf("%lu\n", save(vec{13}, 13));
    printf("%lu\n", save(vec{1,2,3,4}, 250));
    printf("%lu\n", save(vec{100}, 500));
    printf("%lu\n", save(vec{11,13,15,17,19}, 8));
    printf("%lu\n", save(vec{45}, 12));

    return 0;
}
