/* 
* filename: 7.4 root.c
* property: exercise
*/

#include <stdio.h>
#include <math.h>

void root(float *a, float *b, float *c, float *x1, float *x2) {
    float d = (*b) * (*b) - 4 * (*a) * (*c);
    if (d < 0) {
        printf("no real root;");
    }
    else {
        *x1 = (-(*b) + sqrt(d)) / (2 * (*a));
        *x2 = (-(*b) - sqrt(d)) / (2 * (*a));
    }
}

int main() {
    printf("polynomial: ");
    float a, b, c;
    float x1, x2;
    scanf("%f %f %f", &a, &b, &c);

    printf("(%3.2f)x^2 + (%3.2f)x + (%3.2f) == 0\n", a, b, c);

    root(&a, &b, &c, &x1, &x2);

    printf("x1 = %3.2f\nx2 = %3.2f\n", x1, x2);
    
    return 0;
}