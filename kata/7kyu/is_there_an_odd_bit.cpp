/*
  codewars.com
  Problem: Is there any odd bit?
  24/04/2020
*/

#include <bits/stdc++.h>

int any_odd(unsigned x) {
    int result = 0;
    if (x > 0) {
        int i = 0;
        while (x) {
            if (i % 2 == 1 && x % 2 == 1) {
                result = 1;
                break;
            }
            x >>= 1;
            ++i;
        }
    }
    return result;
}

int main() {
    printf("%d\n", any_odd(2));
    printf("%d\n", any_odd(10));
    printf("%d\n", any_odd(0));
    printf("%d\n", any_odd(1));

    return 0;
}
