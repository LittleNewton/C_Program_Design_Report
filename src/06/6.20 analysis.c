/*
* filename: 6.20 analysis.c
* property； analysis
*/

#include <stdio.h>

int f(int x) {
    static int f = 0, y = 0;
    if (f == 0)
        y += 2 * x;
    else
        if(f == 1) 
            y += 3 * x;
        else
            y += 4 * x;
    f++;
    return y;
}

int main() {
    printf("\nf(2) =  %d", f(2));
    printf("\nf(2) =  %d", f(2));
    printf("\nf(2) =  %d", f(2));

    return 0;
}