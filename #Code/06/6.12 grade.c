/*
* filename: 6.12 grade.c
* property: exercise
*/

#include <stdio.h>

#define ROW         3
#define COLUMN      4

void mean(int a[ROW][COLUMN]) {
    int sum[ROW];
    int avg[ROW];
    int i, j;
    for(j = 0; j < ROW; j++) {
        sum[j] = 0;
        for(i = 0; i < COLUMN; i++) {
            sum[j] += a[j][i];
        }
        avg[j] = sum[j] / COLUMN;
    }
    for(j = 0; j < ROW; j++) {
        printf("%4d\n", avg[j]);
    }
    printf("\n");
}

void passrate(int a[ROW][COLUMN]) {
    float count[COLUMN];
    int i, j;
    for(j = 0; j < COLUMN; j++) {
        for(i = 0; i < ROW; i++) {
            if(a[i][j] >= 60) {
                count[j]++;
            }
        }
    }
    for(i = 0; i < COLUMN; i++) {
        printf("Course %d passrage: %2.2f\n", i + 1, (count[i] / ROW) * 100.0);
    }
}

int max2(int a,int b) {
    return(a > b? a : b);
}

void max(int a[ROW][COLUMN]) {
    int Max;
    Max = a[0][0];
    int column, row;
    int i, j;
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COLUMN; j++) {
            if(Max < a[i][j]) {
                Max = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    printf("Student %d in Course %d, highest score = %d.\n", row + 1, column + 1, Max);
}

int main() {
    int i, j;
    int a[ROW][COLUMN];
    printf("input score table\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COLUMN; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nscore table:\n");
    char space[] = "           ";
    printf("%s", space);
    for (i = 1; i <= COLUMN; i++) {
        printf("course %d   ", i);
    }
    printf("\n");

    for (i = 0; i < 8 * COLUMN + 11 + 3 * (COLUMN - 1); i++) {
        printf("-");
    }
    printf("\n");

    for (i = 0; i < ROW; i++) {
        printf("Student %d     ", i + 1);
        for(j = 0; j < COLUMN; j++) {
            printf("%d         ", a[i][j]);
            if(j == COLUMN-1) {
                printf("\n");
            }
        }
    }
    printf("\nThe mean_values of each student are:\n");
    mean(a);
    printf("The pass_rate of each class are:\n");
    passrate(a);
    printf("The highest score owner's location and score is:\n");
    max(a);
    return 0;
}