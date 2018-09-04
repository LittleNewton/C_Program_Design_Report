/*
* filename: 6.16 digh.c
* property: exercise
*/

#include <stdio.h>

int digh(int n, int k) {
    int y;
    int t;
    for (t = 1; t <= k; t++) {
        y = n % 10;
        n = (n - y) / 10;
    }
    return y;
}

int main() {
    int n, k;
    printf("n, k = ");
    scanf("%d, %d", &n, &k);
    printf("digh(%d, %d) = %d", n, k, digh(n, k));
    return 0;
}