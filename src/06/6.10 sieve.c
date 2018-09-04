/*
* filename: 6.10 sieve.c
* property: exercise
*/

#include <stdio.h>
#include <math.h>

int judge(int a, int b, int c) {
    int BOOL;
    float z;
    float k;
    float j;
    z = 100 * a + 10 * b + c;
    k = sqrt(z);
    for(j = 1; j < z; j++) {
        if(j - k == 0)
            BOOL = 1;
            continue;
    }
    return BOOL;
}

int compare(int a, int b, int c) {
    int BOOL;
    if((a == b && a != c) || (a == c && a != b) || (b == c && a != b)) {
        BOOL = 1;
    }
    return BOOL;
}

int main() {
    int a, b, c;
    printf("a, b, c = ");
    scanf("%d, %d, %d", &a, &b, &c);
    if(judge(a, b, c) == 1 && compare(a, b, c) == 1) {
        printf("%d%d%d, yes\n", a, b, c);
    }
    else{
        printf("Sorry, it isn't.");
    }
}