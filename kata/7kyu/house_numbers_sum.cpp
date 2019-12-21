/*
  codewars.com
  Problem: House number sum
  22/12/2019
*/

#include <cstdio>
#include <vector>

int house_numbers_sum(const std::vector<int> &arr) {
    int sum = 0;
    for (int a  : arr) {
      if (a == 0)
        break;
      sum += a;
    }
    return sum;
}


int main() {
    printf("%d\n", house_numbers_sum({5, 1, 2, 3, 0, 1, 5, 0, 2})); // 11
    printf("%d\n", house_numbers_sum({4, 2, 1, 6, 0})); // 13
    printf("%d\n", house_numbers_sum({4, 1, 2, 3, 0, 10, 2})); // 10
    printf("%d\n", house_numbers_sum({0, 1, 2, 3, 4, 5})); // 0)

    return 0;
}
