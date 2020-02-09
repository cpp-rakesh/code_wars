/*
  codewars.com
  Problem: Equals without ==
  23/05/2019
*/

#include <bits/stdc++.h>

bool equals(int a, int b){
    return !(a - b);
}

int main() {
    printf("%d\n", equals(1234, 1234));
    printf("%d\n", equals(1305, 1305));
    printf("%d\n", equals(1234, 1243));

    return 0;
}
