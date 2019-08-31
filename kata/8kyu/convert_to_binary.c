/*
  codewars.com
  Problem: Convert to binary
  01/09/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long to_binary(unsigned short n) {
    unsigned long long r = 0;
    int i = 0;
    while (n > 0) {
        r += (pow(10, i) * (n & 1));
        n >>= 1;
        ++i;
    }
    return r;
}

void main() {
    printf("%llu\n", to_binary(8));
    printf("%llu\n", to_binary(65535));
    printf("%llu\n", to_binary(9158));
}
