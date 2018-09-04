/*
* filename: 8.3 matrix t.c
* property: exercise
*/

#include <stdio.h>

void Transport(int (*a)[4], int (*b)[3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            *(*(b + j) + i) = *(*(a + i) + j);
        }
    }
}

int main() {
    int i, j;
    int a[3][4] = {{2, 4, 6, 8}, {1, 3, 5, 7}, {10, 11, 12, 13}};
    int b[4][3];

    Transport(a, b);
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}