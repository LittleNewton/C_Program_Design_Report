/*
* filename: 7.2 array.c
* property: test
*/

#include <stdio.h>

int main() {
    int i, *p, s = 0;
    int a[5] = {5, 6, 7, 8, 9};

    p = a;

    for(i = 0; i < 5; i++, p++) {
        s += *p;
    }
    printf("s = %d", s);
    return 0;
}