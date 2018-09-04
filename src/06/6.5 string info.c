/*
* filename: 6.5 string info.c
* property: exercise
*/

#include <string.h>
#include <stdio.h>

int main() {
    int space = 0;
    int alpha = 0;
    int numbs = 0;
    int elsec = 0;

    char a[1000];
    gets(a);

    int i;

    for (i = 0; i <= strlen(a); i++) {
        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z') {
            alpha += 1;
        }
        if (a[i] == ' ') {
            space += 1;
        }
        if (a[i] >= '0' && a[i] <= '9') {
            numbs += 1;
        }
    }

    elsec = strlen(a) - space - alpha - numbs;
    printf("Total length:       %d\n", strlen(a));
    printf("Spqce:              %d\n", space);
    printf("letter:             %d\n", alpha);
    printf("number:             %d\n", numbs);
    printf("else characters:    %d\n", elsec);

    return 0;
}