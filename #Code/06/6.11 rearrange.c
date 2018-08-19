/*
* filename: 6.11 rearrange.c
* property: exercise
*/

#include <stdio.h>

void arrange(int a[]) {
    int count = 0;
    int i;
    int ans[10];

    for (i = 0; i < 10; i++) {
        if (a[i] % 2 == 1) {
            ans[count] = a[i];
            count += 1;
        }
    }
    for (i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            ans[count] = a[i];
            count += 1;
        }
    }

    for (i = 0; i < 10; i++) {
        a[i] = ans[i];
    }
}

int main() {
    int i;
    int a[10];
    printf("a[10] = ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    
    arrange(a);

    for (i = 0; i < 10; i++) {
        printf("%4d", a[i]);
    }

    return 0;
}