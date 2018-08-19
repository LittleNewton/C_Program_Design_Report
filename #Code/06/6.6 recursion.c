/*
* filename: 6.6 recursion.c
* property: exercise
*/

#include <stdio.h>

int ACK(int m, int n) {
    if(m == 0 && n >= 0)
        return 1 + n;
    else 
        if(n == 0 && m > 0)
            return ACK(m - 1, 0);
        else 
            if(m > 0 && n > 0)
                return ACK(m - 1, ACK(m, n - 1));
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("ACK(%d, %d) = %d\n",m, n, ACK(m, n));
    getchar();
}