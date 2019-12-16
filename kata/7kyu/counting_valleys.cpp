/*
  codewars.com
  Problem: Counting valleys
  17/12/2019
*/

#include <string>
#include <cstdio>

int countValleys(const std::string& s){
    int level = 0;
    bool valley_start = false;
    int count = 0;
    for (char c : s) {
        if (level == 0 && c == 'D')
            valley_start = true;
        if (level == -1 && c == 'U') {
            valley_start = false;
            ++count;
        }
        if (c == 'D')
            --level;
        if (c == 'U')
            ++level;
    }

    return count;
}

int main() {
    printf("%d\n", countValleys("DU"));
    printf("%d\n", countValleys("FFFFFFFF"));
    printf("%d\n", countValleys("UFFDDFDUDFUFU"));
    printf("%d\n", countValleys("UFFDDFDUDFUFUUFFDDUFFDDUFFDDUDUDUDUDUDUUUUUUUUU"));
    printf("%d\n", countValleys("UFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFU"));
    printf("%d\n", countValleys("UFFDDFDUDFUFUUFFDDFDUDFUFU"));
    printf("%d\n", countValleys("UFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFUUFFDDFDUDFUFU"));
    printf("%d\n", countValleys("DFFFU"));
    printf("%d\n", countValleys("UFFFD"));
    printf("%d\n", countValleys("DFFFD"));
    printf("%d\n", countValleys("UFFFU"));

    return 0;
}
