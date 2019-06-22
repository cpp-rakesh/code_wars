/*
  codewars.com
  Problem: maximum triplet sum
  22/06/2019
*/

#include <cstdio>
#include <vector>
#include <algorithm>

int maxTriSum (std::vector <int> n) {
    std::sort(n.begin(), n.end());

    int s = n[n.size() - 1];
    int i = n.size() - 2;
    int c = 1;

    while (i >= 0) {
        if (n[i] != n[i + 1]) {
            s += n[i];
            ++c;
        }

        if (c == 3)
            break;

        --i;
    }

    return s;
}

int main() {
    printf("%d\n", maxTriSum({3,2,6,8,2,3}));
    printf("%d\n", maxTriSum({2,9,13,10,5,2,9,5}));
    printf("%d\n", maxTriSum({2,1,8,0,6,4,8,6,2,4}));
    printf("%d\n", maxTriSum({-3,-27,-4,-2,-27,-2}));
    printf("%d\n", maxTriSum({-14,-12,-7,-42,-809,-14,-12}));
    printf("%d\n", maxTriSum({-13,-50,57,13,67,-13,57,108,67}));
    printf("%d\n", maxTriSum({-7,12,-7,29,-5,0,-7,0,0,29}));

    return 0;
}
