/*
  codewars.com
  Problem: Find the parity outlier
  28/12/2019
*/

#include <bits/stdc++.h>

int FindOutlier(std::vector<int> arr) {
    int result = 0;
    int c = (arr[0] & 1) + (arr[1] & 1) + (arr[2] & 1);
    c = c < 2 ? 1 : 0;
    for (int e : arr) {
        if ((e & 1) == c) {
            result = e;
            break;
        }
    }
    return result;
}

int main() {
    printf("%d\n", FindOutlier({2, 3, 4}));
    printf("%d\n", FindOutlier({1, 2, 3}));
    printf("%d\n", FindOutlier({4, 1, 3, 5, 9}));

    return 0;
}
