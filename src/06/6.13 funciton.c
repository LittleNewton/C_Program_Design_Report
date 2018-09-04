/*
* filename: 6.13 function.c
* property: exercise
*/

#include <stdio.h>
#include <math.h>

void f(int n, double x) {
    switch(n) {
        case 1: printf("%f", pow(x, 3) + x - 1);                break;
        case 2: printf("%f", pow((x + 5), 3) + (x + 5) - 1);    break;
        case 3: printf("%f", pow(sin(x), 3) + sin(x) - 1);      break;
        default: printf("Error input");
    }
}

int main() {
    printf("n, x = ");
    int n;
    double x;
    scanf("%d, %f", &n, &x);
    printf("f(n, x) = ");
    f(n, x);
    return 0;
}