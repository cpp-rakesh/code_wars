/*
  codewars.com
  Problem: Delete occurences of an element if it occures more than n times
  06/05/2019
*/

#include <bits/stdc++.h>

std::vector<int> deleteNth(std::vector<int> arr, int n) {
    std::vector<int> result;
    std::unordered_map<int, int> dict;
    for (std::size_t i = 0; i < arr.size(); ++i) {
        ++dict[arr[i]];
        if (dict[arr[i]] <= n)
            result.push_back(arr[i]);
    }

    return result;
}

inline void print(const std::vector<int>& v) {
    printf("-----------------------------------------------------------------\n");
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n-----------------------------------------------------------------\n");
}

int main() {
    std::vector<int> a = {20, 37, 20, 21};
    print(deleteNth(a, 1));
    a = {1, 1, 3, 3, 7, 2, 2, 2, 2};
    print(deleteNth(a, 3));

    return 0;
}
