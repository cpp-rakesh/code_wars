/*
  codewars.com
  Problem: Find the odd int
  27/09/2019
*/

#include <bits/stdc++.h>

int findOdd(const std::vector<int>& numbers){
  int r = 0;
  for (int n : numbers)
    r ^= n;
  return r;
}

int main() {
    using V = std::vector<int>;
    printf("%d\n", findOdd(V{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}));
    printf("%d\n", findOdd(V{1,1,2,-2,5,2,4,4,-1,-2,5}));
    printf("%d\n", findOdd(V{20,1,1,2,2,3,3,5,5,4,20,4,5}));
    printf("%d\n", findOdd(V{10}));
    printf("%d\n", findOdd(V{1,1,1,1,1,1,10,1,1,1,1}));

    return 0;
}
