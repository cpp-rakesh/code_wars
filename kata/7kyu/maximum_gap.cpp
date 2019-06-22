/*
  codewars.com
  Problem: maximum gap
  23/06/2019
*/

#include <cstdio>
#include <vector>
#include <algorithm>

int maxGap (std::vector<int> n) {
    std::sort(n.begin(), n.end());
    int max = n[1] - n[0];
    for (std::size_t i = 2; i < n.size(); ++i)
        if (n[i] - n[i - 1] > max)
            max = n[i] - n[i - 1];
    return max;
}

int main() {
    printf("%d\n", maxGap({13,10,2,9,5}));
    printf("%d\n", maxGap({13,3,5}));
    printf("%d\n", maxGap({24,299,131,14,26,25}));
    printf("%d\n", maxGap({-7,-42,-809,-14,-12}));
    printf("%d\n", maxGap({12,-5,-7,0,290}));
    printf("%d\n", maxGap({-54,37,0,64,-15,640,0}));

    return 0;
}
