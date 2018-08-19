/*
* filename: 6.3 prime.c
* property: exercise
*/

#include <stdio.h>
#include <math.h>

void Prime(int n) {
    int i, k;
    k = n/2;
    for(i = 2; i <= k; i++)
        if (n % i == 0)
            break;

    if(i >= k + 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}

int main() {
    int m;
    printf("integer m = ");
    scanf("%d",&m);
    Prime(m);
    return 0;
}
