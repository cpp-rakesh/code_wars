/*
  codewars.com
  Problem: Absent Vowel
  02/01/2020
*/

#include <stdio.h>
#include <ctype.h>

int absent_vowel(const char *str_in) {
    int p = 0;
    int i = 0;
    int d[5] = {0};
    while (str_in[i] != '\0') {
        const char c = tolower(str_in[i]);
        switch (c) {
        case 'a':
            ++d[0];
            break;
        case 'e':
            ++d[1];
            break;
        case 'i':
            ++d[2];
            break;
        case 'o':
            ++d[3];
            break;
        case 'u':
            ++d[4];
            break;
        default:
            break;
        }
        ++i;
    }

    i = 0;
    for (; i < 5; ++i) {
        if (d[i] == 0) {
            p = i;
            break;
        }
    }

    return p;
}

void main() {
    printf("%d\n", absent_vowel("John Doe hs seven red pples under his bsket"));
    printf("%d\n", absent_vowel("Bb Smith sent us six neatly arranged range bicycles"));
}
