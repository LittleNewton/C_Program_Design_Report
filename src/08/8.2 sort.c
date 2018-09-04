/*
* filename: 8.2 sort.c
* property: exercise
*/

#include<stdio.h>

void sort(int array[], int n) {
    int *p1, *p2, t;
    for (p1 = array; p1 < array + (n - 1); p1++) {
        for (p2 = p1 + 1; p2 < array + n; p2++) {
            if(*p1 > *p2) {
                t = *p1;
                *p1 = *p2;
                *p2 = t;
            }
        }
    }
}

int main() {
    int *p, a[20], i;
    printf("a[20] = ");
    for (i = 0; i < 20; i++) {
        scanf("%d, ", &a[i]);
    }

    sort(a, 20);

    for (p=a;p<a+20;p++) {
        if((p - &a[0]) % 5 == 0) {
            printf("\n");
        }
        printf("%4d", *p);
    }

    return 0;
}