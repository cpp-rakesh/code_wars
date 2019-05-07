/*
  codewars.com
  Problem: Minimum ticket cost
  08/05/2019
*/

#include <stdio.h>
#include <stddef.h>

int catch_sign_change(const int* arr, size_t sz) {
    int c = 0;
    for (size_t i = 1; i < sz; ++i) {
        const int a = (1 << 31) & arr[i];
        const int b = (1 << 31) & arr[i - 1];
        if (a != b) ++c;
    }

    return c;
}

void main() {
    const int a[4] = {1, 3, 4, 5};
    printf("%d\n", catch_sign_change(a, 4));
    const int b[5] = {1, -3, -4, 0, 5};
    printf("%d\n", catch_sign_change(b, 5));
    const int c[0] = {};
    printf("%d\n", catch_sign_change(c, 0));
    const int d[7] = {-47, 84, -30, -11, -5, 74, 77};
    printf("%d\n", catch_sign_change(d, 7));
}
