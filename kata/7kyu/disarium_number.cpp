/*
  codewars.com
  Problem: disarium number
  22/06/2019
*/

#include <cstdio>
#include <string>
#include <cmath>

std::string disariumNumber (int n) {
    const std::string s = std::to_string(n);
    int t = 0;
    for (std::size_t i = 0; i < s.size(); ++i)
        t += std::pow(s[i] - '0', i + 1);
    return t == n ? "Disarium !!" : "Not !!";
}

int main() {
    printf("%s\n", disariumNumber(89).c_str());
    printf("%s\n", disariumNumber(564).c_str());
    printf("%s\n", disariumNumber(1024).c_str());
    printf("%s\n", disariumNumber(64599).c_str());
    printf("%s\n", disariumNumber(136586).c_str());
    printf("%s\n", disariumNumber(1048576).c_str());

    return 0;
}
