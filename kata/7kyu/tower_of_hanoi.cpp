/*
  codewars.com
  Problem: Tower of hanoi
  22/06/2019
*/

#include <cmath>
#include <cstdio>

long long towerOfHanoi(int r)
{
    return std::pow(2, r) - 1;
}

int main() {
    printf("%lld\n", towerOfHanoi(4));
    printf("%lld\n", towerOfHanoi(5));
    printf("%lld\n", towerOfHanoi(10));

    return 0;
}
