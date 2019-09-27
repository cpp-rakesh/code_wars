/*
  codewars.com
  Problem: English beggars
  27/09/2019
*/

#include <bits/stdc++.h>

std::vector<int> beggars(const std::vector<int>& values, unsigned int n){
  std::vector<int> r(n, 0);
  for (int i = 0; i < n; ++i) {
    int j = i;
    while (j < values.size()) {
      r[i] += values[j];
      j += n;
    }
  }
  return r;
}

inline void print(const std::vector<int>& v) {
    for (int n : v)
        printf("%d ", n);
    printf("\n");
}

int main() {
    using V = std::vector<int>;
    print(beggars(V{1,2,3,4,5},1));
    print(beggars(V{1,2,3,4,5},2));
    print(beggars(V{1,2,3,4,5},3));
    print(beggars(V{1,2,3,4,5},6));
    print(beggars(V{1,2,3,4,5},0));

    return 0;
}
