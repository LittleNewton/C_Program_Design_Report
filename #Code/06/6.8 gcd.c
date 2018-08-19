/*
* filename: 6.8 gcd.c
* property: exercise
*/

#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    else {
        if (a > b) {
            return gcd(a - b, b);
        }
        else {
            return gcd(a, b - a);
        }
    }
}

int main() {
    int a, b;
    printf("a ,b = ");
    scanf("%d, %d", &a, &b);

    printf("gcd(a, b) = %d\n", gcd(a, b));
    printf("lcm(a, b) = %d\n", a * b / gcd(a, b));

    return 0;
}