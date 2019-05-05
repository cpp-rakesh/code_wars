/*
  codewars.com
  Problem: Convert boolean values to strings yes or no
  05/05/2019
*/

#include <bits/stdc++.h>

float calcAverage(const std::vector<int>& values) {
    double sum = 0;
    for (std::size_t i = 0; i < values.size(); ++i)
        sum += values[i];

    return std::roundf((sum / values.size()) * 10) / 10;
}

int main() {
    using V = std::vector<int>;
    printf("%f\n", calcAverage(V{2, 5}));
    printf("%f\n", calcAverage(V{5}));
    printf("%f\n", calcAverage(V{4, 2, 1}));
    printf("%f\n", calcAverage(V{3, 2, 5, 1}));
    printf("%f\n", calcAverage(V{3, 2, 3, 5, 1}));
    printf("%f\n", calcAverage(V{3, 4, 2, 4, 5}));

    return 0;
}
