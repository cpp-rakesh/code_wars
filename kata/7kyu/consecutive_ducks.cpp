/*
  codewars.com
  Problem: Consecutive ducks
  17/12/2019
*/

#include <cstdio>
#include <cmath>

bool consecutiveDucks (unsigned int num) {
    const float f = std::log2(num);
    return f != int(f);
}

int main() {
    printf("%d\n", consecutiveDucks(69));
    printf("%d\n", consecutiveDucks(8));
    printf("%d\n", consecutiveDucks(57));
    printf("%d\n", consecutiveDucks(6));
    printf("%d\n", consecutiveDucks(13));
    printf("%d\n", consecutiveDucks(16));
    printf("%d\n", consecutiveDucks(91));
    printf("%d\n", consecutiveDucks(75));
    printf("%d\n", consecutiveDucks(38));
    printf("%d\n", consecutiveDucks(25));
    printf("%d\n", consecutiveDucks(32));
    printf("%d\n", consecutiveDucks(65));
    printf("%d\n", consecutiveDucks(13));
    printf("%d\n", consecutiveDucks(16));
    printf("%d\n", consecutiveDucks(99));
    printf("%d\n", consecutiveDucks(522));
    printf("%d\n", consecutiveDucks(974));
    printf("%d\n", consecutiveDucks(755));
    printf("%d\n", consecutiveDucks(512));
    printf("%d\n", consecutiveDucks(739));
    printf("%d\n", consecutiveDucks(1006));
    printf("%d\n", consecutiveDucks(838));
    printf("%d\n", consecutiveDucks(1092));
    printf("%d\n", consecutiveDucks(727));
    printf("%d\n", consecutiveDucks(648));
    printf("%d\n", consecutiveDucks(1024));
    printf("%d\n", consecutiveDucks(851));
    printf("%d\n", consecutiveDucks(541));
    printf("%d\n", consecutiveDucks(1011));
    printf("%d\n", consecutiveDucks(822));
    printf("%d\n", consecutiveDucks(382131));
    printf("%d\n", consecutiveDucks(118070));
    printf("%d\n", consecutiveDucks(17209));
    printf("%d\n", consecutiveDucks(32768));
    printf("%d\n", consecutiveDucks(161997));
    printf("%d\n", consecutiveDucks(400779));
    printf("%d\n", consecutiveDucks(198331));
    printf("%d\n", consecutiveDucks(325482));
    printf("%d\n", consecutiveDucks(88441));
    printf("%d\n", consecutiveDucks(648));
    printf("%d\n", consecutiveDucks(65536));
    printf("%d\n", consecutiveDucks(323744));
    printf("%d\n", consecutiveDucks(183540));
    printf("%d\n", consecutiveDucks(65271));
    printf("%d\n", consecutiveDucks(5263987));

    return 0;
}
