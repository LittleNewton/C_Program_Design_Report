/*
* filename: 6.19 analysis.c
* property: analysis
*/

#include <stdio.h>

int a = 3, b = 5, c = 2;

int f(int a, int b) {
    printf("a = %d, b = %d\n", a, b);
    a++;
    b--;
    printf("a = %d, b = %d\n", a, b);
    c = a + b;
    return a + b + c;
}

int main() {
    int a = 4, b, c, k;
    printf("a = %d, b = %d, c = %d\n", a, b, c);  // added command
    k = f(a + 2, b + 1);
    printf("%d, %d, %d, %d", a, b, c, k);
    return 0;
}