/*
* filename: 6.9 combinatorial number.c
* property: exercise
*/

#include <stdio.h>

#define INPUT_ERROR     -1

int factorial(int a) {
    if (a < 0) {
        return INPUT_ERROR;
    }
    if (a == 0) {
        return 1;
    }
    if (a > 1) {
        return a * factorial(a - 1);
    }
}

int main() {
    int m, n;
    printf("m, n = ");
    scanf("%d, %d", &m, &n);

    if (m * n <= 0 || m < n) {
        return INPUT_ERROR;
    }
    else {
        int t =  factorial(m) / (factorial(n) * factorial(m - n));
        printf("(%d!)/((%d-%d)!(%d)!) = %d", m, m, n, n, t);
    }
    return 0;
}