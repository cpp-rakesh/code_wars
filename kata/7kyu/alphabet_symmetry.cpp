/*
  codewars.com
  Problem: Alphabet Symmetry
  01/09/2019
*/

#include <vector>
#include <string>

std::vector<int> solve(std::vector<std::string> arr){
    std::vector<int> result;
    for (std::string str : arr) {
        int count = 0;
        for (std::size_t i = 0; i < str.size(); ++i) {
            if (str[i] >= 'a' && str[i] <= 'z')
                count += i == str[i] - 'a';
            else
                count += i == str[i] - 'A';
        }
        result.push_back(count);
    }

    return result;
};

inline void print(const std::vector<int>& v) {
    for (const auto& x : v)
        printf("%d ", x);
    printf("\n");
}

int main() {
    print(solve(std::vector<std::string>({"abode","ABc","xyzD"})));
    print(solve(std::vector<std::string>({"abide","ABc","xyz"})));
    print(solve(std::vector<std::string>({"IAMDEFANDJKL","thedefgh","xyzDEFghijabc"})));

    return 0;
}
