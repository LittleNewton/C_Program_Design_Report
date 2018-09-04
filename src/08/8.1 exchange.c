/*
* filename: 8.1 exchange.c
* property: test
*/

#include <stdio.h>

int main() {
    int x, y, z, t ;
    int *p1, *p2, *p3;
    printf("x, y, z = ");
    scanf("%d, %d, %d", &x, &y, &z);
    p1 = &x;
    p2 = &y;
    p3 = &z;

    t = *p3;
    *p3 = *p2;
    *p2 = *p1;
    *p1 = t;
    printf("x = %d\ny = %d\nz = %d",x, y, z);

    return 0;
}