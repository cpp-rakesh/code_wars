/*
  codewars.com
  Problem: Sum of digits/digital root
  06/06/2020
*/

#include <bits/stdc++.h>

int digital_root(int n) {
    while (n >= 10) {
        int s = 0;
        while (n) {
            s += n % 10;
            n /= 10;
        }
        n = s;
    }

    return n;
}

int main() {
    printf("%d\n", digital_root(16));
    printf("%d\n", digital_root(195));
    printf("%d\n", digital_root(992));
    printf("%d\n", digital_root(167346));
    printf("%d\n", digital_root(0));
    return 0;
}
