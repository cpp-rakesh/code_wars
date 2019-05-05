/*
  codewars.com
  Problem: Digital Cypher
  06/05/2019
*/

#include <bits/stdc++.h>

class Kata
{
public:
    static std::vector<int> Encode(std::string s, int n) {
        std::string k = std::to_string(n);
        std::vector<int> r;

        for (std::size_t i = 0; i < s.size(); ++i)
            r.push_back((s[i] - 'a' + 1) + (k[i % k.size()] - '0'));
        return r;
    }
};

inline void print(const std::vector<int>& v) {
    printf("--------------------------------------------------\n");
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n--------------------------------------------------\n");
}

int main() {
    Kata k;
    print(k.Encode("scout", 1939));
    print(k.Encode("masterpiece", 1939));

    return 0;
}
