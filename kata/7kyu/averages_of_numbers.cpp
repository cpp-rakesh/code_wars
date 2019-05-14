/*
  codewars.com
  Problem: Averages of numbers
  14/05/2019
*/

#include <bits/stdc++.h>

std::vector<double> averages(std::vector<int> n)
{
    std::vector<double> r;
    for (std::size_t i = 1; i < n.size(); ++i)
        r.push_back((n[i] + n[i - 1]) / static_cast<double>(2));

    return r;
}

void print(const std::vector<double>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%f ", v[i]);
    printf("\n");
}

int main() {
    std::vector<int> v = { 2, 2, 2, 2, 2 };
    print(averages(v));

    v = { 2, -2, 2, -2, 2 };
    print(averages(v));

    v = { 1, 3, 5, 1, -10 };
    print(averages(v));

    return 0;
}
