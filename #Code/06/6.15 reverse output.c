/*
* filename: 6.15 reverse output.c
* property: exercise
*/

#include <stdio.h>

int f(int n) {
    int z;
    if (n < 10) {
        printf("%d", n);
        return 0;
    }
    else {
        z = n % 10;
        printf("%d", z);
        n=(n - n % 10) / 10;
        return f(n);
    }
}

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    f(n);
    return 0;
}