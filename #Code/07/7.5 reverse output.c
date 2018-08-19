/*
* filename: 7.5 reverse output.c
* property: exercise
*/

#include <stdio.h>

#define NUM     256

void reverse(int *a, int count) {
    int i;
    int tmp;
    for (i = 0; i <= count / 2; i++) {
        tmp = a[i];
        a[i] = a[count - i];
        a[count - i] = tmp;
    }
}

int main() {
    int i, a[NUM];
    int *p, count = 0;
    p = a;
    char c;
    printf("a[n] = ");
    for(i = 0; i < NUM; i++) {
        scanf("%d%c,", &a[i], &c);
        if (c != ' ') {
            break;
        }
        else {
            count += 1;
        }
    }

    reverse(a, count);

    printf("The revise sequence is:\n");
    for(i = 0; i <=  count; i++) {
        printf("%3d", *(p + i));
    }
    printf("\n");
    return 0;
}