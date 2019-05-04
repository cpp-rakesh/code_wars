/*
  codewars.com
  Problem: Sum of a sequence
  04/05/2019
*/

#include <bits/stdc++.h>

int sequenceSum(int s, int e, int d) {
    if (s > e)
        return 0;
    if ((e - s) % d)
        e = (((e - s) / d) * d) + s;

    const int n = ((e - s) / d) + 1;
    return (n * (e + s)) >> 1;
}

int main() {
    printf("%d\n", sequenceSum(2, 6, 2));
    printf("%d\n", sequenceSum(1, 5, 1));
    printf("%d\n", sequenceSum(1, 5, 3));
    printf("%d\n", sequenceSum(0, 15, 3));

    return 0;
}
