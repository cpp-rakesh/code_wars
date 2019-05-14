/*
  codewars.com
  Problem: Get list sum recursively
  14/05/2019
*/

#include <stdio.h>

int sumR (int *a, int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return a[0];
    else
        return a[n - 1] + sumR(a, n - 1);
}

void main() {
    int a[3] = {1, 2, 3};
    printf("%d\n", sumR(a, 3));

    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", sumR(b, 10));
}
