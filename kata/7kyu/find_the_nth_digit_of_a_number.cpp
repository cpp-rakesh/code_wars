/*
  codewars.com
  Problem: Find the nth digit of a number
  14/05/2019
*/

#include <bits/stdc++.h>

int findDigit(int num, int nth){
    num = std::abs(num);
    if (nth <= 0)  return -1;

    std::string s = std::to_string(num);
    if (nth > s.size())  return 0;

    return s[s.size() - nth] - '0';
}

int main() {
    printf("%d\n", findDigit(5673, 4));
    printf("%d\n", findDigit(129, 2));
    printf("%d\n", findDigit(-2825, 3));
    printf("%d\n", findDigit(-456, 4));
    printf("%d\n", findDigit(0, 20));
    printf("%d\n", findDigit(65, 0));
    printf("%d\n", findDigit(24, -8));

    return 0;
}
