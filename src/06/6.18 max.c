/*
* filename: 6.18 max.c
* property: exercise
*/

#include <stdio.h>

#define MAX(a, b, c)        ((a > b? a : b) > c? (a > b? a : b) : c)

int main() {
    int x, y, z;
    printf("x, y, z = ");
    scanf("%d, %d, %d", &x, &y, &z);
    printf("max(%d, %d, %d) = %d", x, y, z, MAX(x, y, z));
    return 0;
}