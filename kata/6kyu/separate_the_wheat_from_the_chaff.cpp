/*
  codewars.com
  Problem: Seprate the wheat from the chaff
  27/07/2019
*/

#include <bits/stdc++.h>

using L = long long int;
using V = std::vector<L>;

void swap(L& a, L& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

V wheatFromChaff (V v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j) {
        while (i < v.size() && v[i] < 0)
            ++i;
        while (j >= 0 && v[j] > 0)
            --j;
        if (i < j)
            swap(v[i], v[j]);
        else
            break;
    }
    return v;
}

inline void print(const V& v) {
    for (const auto& x : v)
        printf("%d ", x);
    printf("\n");
}

int main() {
    print(wheatFromChaff(V{2, -4, 6, -6}));
    print(wheatFromChaff(V{7,-3,-10}));
    print(wheatFromChaff(V{7,-8,1,-2}));
    print(wheatFromChaff(V{8,10,-6,-7,9}));
    print(wheatFromChaff(V{-3,4,-10,2,-6}));
    print(wheatFromChaff(V{2,-6,-4,1,-8,-2}));
    print(wheatFromChaff(V{16,25,-48,-47,-37,41,-2}));
    print(wheatFromChaff(V{-30,-11,36,38,34,-5,-50}));
    print(wheatFromChaff(V{-31,-5,11,-42,-22,-46,-4,-28}));
    print(wheatFromChaff(V{46,39,-45,-2,-5,-6,-17,-32,17}));
    print(wheatFromChaff(V{-9,-8,-6,-46,1,-19,44}));
    print(wheatFromChaff(V{-37,-10,-42,19,-31,-40,-45,33}));
    print(wheatFromChaff(V{-25,-48,-29,-25,1,49,-32,-19,-46,1}));

    return 0;
}
