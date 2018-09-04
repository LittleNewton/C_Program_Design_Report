/*
* filename: 7.3 analysis.c
* property: analysis
*/

#include <stdio.h>

int main() {
    int i,s1 = 0, s2 = 0, s3 = 0, s4 = 0, *p;
    int a[5] = {1, 2, 3, 4, 5};
    p = a;
    for (i = 0; i < 5; i++) {
        s1 += p[i];
    }
    for (i = 0; i < 5; i++) {
        s2 += *(p + i);
    }
    for (p = a; p < a + 5; p++) {
        s3 += *p;
    }
    p = a;
    for (i = 0; i < 5; i++) {
        s4 += *p++;
    }
    printf("s1 = %d\ns2 = %d\ns3 = %d\ns4 = %d\n", s1, s2, s3, s4);
    return 0;
}