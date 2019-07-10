/*
  codewars.com
  Problem: Delta bits
  10/07/2019
*/

#include <stdio.h>

unsigned int convert_bits(unsigned int a, unsigned int b) {
    unsigned int c = 0;
    unsigned int i = 0;
    unsigned int r = a ^ b;

    for (; i < 32; ++i)
        if (r & (1 << i))
            ++c;
    return c;
}

void main() {
    printf("%u\n", convert_bits(31, 14));
}
