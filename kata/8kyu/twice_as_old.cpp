/*
  codewars.com
  Problem: Twice as old
  22/06/2019
*/

#include <cstdio>

int twice_as_old(int d, int s) {
    const int r = d - (s << 1);
    if (r >= 0)
        return r;
    else
        return (s << 1) - d;
}

int main() {
    printf("%d\n", twice_as_old(36, 7));
    printf("%d\n", twice_as_old(55, 30));
    printf("%d\n", twice_as_old(42, 21));
    printf("%d\n", twice_as_old(22, 1));
    printf("%d\n", twice_as_old(29, 0));

    return 0;
}
