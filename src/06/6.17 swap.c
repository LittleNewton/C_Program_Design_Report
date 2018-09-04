/*
* filename: 6.17 swap.c
* property: exercise
*/

#include <stdio.h>

int X, Y;

void swap(int x, int y) {
    Y = x;
    X = y;
}

int main() {
    printf("X, Y = ");
    scanf("%d, %d", &X, &Y);
    swap(X, Y);
    printf("X, Y = %d, %d", X, Y);
    return 0;
}