/*
  codewars.com
  Problem: Number of people in the bus
  05/05/2019
*/

#include <bits/stdc++.h>

unsigned int number(const std::vector<std::pair<int, int>>& busStops) {
    unsigned int in = 0;
    unsigned int ot = 0;

    for (std::size_t i = 0; i < busStops.size(); ++i) {
        in += busStops[i].first;
        ot += busStops[i].second;
    }

    return in - ot;
}

int main() {
    using P = std::pair<int, int>;
    using V = std::vector<P>;
    printf("%u\n", number(V{P{10, 0}, P{3, 5}, P{5, 8}}));
    printf("%u\n", number(V{P{3, 0}, P{9, 1}, P{4, 10}, P{12, 2}, P{6, 1}, P{7, 10}}));
    printf("%u\n", number(V{P{3, 0}, P{9, 1}, P{4, 8}, P{12, 2}, P{6, 1}, P{7,8}}));
    printf("%u\n", number(V{P{0, 0}}));

    return 0;
}
