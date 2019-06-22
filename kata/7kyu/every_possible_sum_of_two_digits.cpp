/*
  codewars.com
  Problem: every possible sum of two digits
  23/06/2019
*/

#include <cstdio>
#include <vector>
#include <string>

std::vector<int> digits(int n) {
    std::vector<int> r;
    const std::string s = std::to_string(n);
    for (std::size_t i = 0; i < s.size() - 1; ++i)
        for (std::size_t j = i + 1; j < s.size(); ++j)
            r.push_back(s[i] - '0' + s[j] - '0');

    return r;
}

void print(const std::vector<int>& v) {
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    print(digits(156));
    print(digits(81596));
    print(digits(3852));
    print(digits(3264128));
    print(digits(999999));

    return 0;
}
