/*
* filename: 6.14 recursion.c
* property: exercise
*/

#include <stdio.h>

int c(int m, int n) {
    if (n == 0 || m == n) {
        return 1;
    }
    if (n == 1) {
        return m;
    }
    if (m > n > 1) {
        return c(m - 1, n - 1) + c(n, m - 1);
    }
}

int main() {
    int m, n;
    printf("m, n = ");
    scanf("%d, %d", &m, &n);

    printf("c(m, n) = %d", c(m, n));
}