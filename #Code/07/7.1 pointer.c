/*
* filename: 7.1 pointer.c
* property: test
*/

#include <stdio.h>

int main() { 
    int a = 5, b = 5, *p;
    printf("&a = %x, &b = %x, p = %x\n", &a, &b, p);
    p = &a;
    *p = 8;
    printf("&a = %x, &b = %x, p = %x\n", &a, &b, p);
    printf("a = %d\n", a);
    p = &b;
    b = 10;
    printf("&a = %x, &b = %x, p = %x\n", &a, &b, p);
    printf("*p = %d", *p);

    return 0;
}