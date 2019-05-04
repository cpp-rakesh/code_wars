/*
  codewars.com
  Problem: Volume of a cuboid
  06/05/2019
*/

#include <bits/stdc++.h>

double getVolumeOfCubiod(double l, double b, double h) {
    return l * b * h;
}

int main() {
    printf("%lf\n", getVolumeOfCubiod(1, 2, 2));
    printf("%lf\n", getVolumeOfCubiod(6.3, 2, 5));

    return 0;
}
