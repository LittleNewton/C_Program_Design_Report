/*
* filename: 6.7 longest word.c
* property: exercise
*/

#include <stdio.h>
#include <string.h>

int is_letter(char c) {
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    char a[5000];
    gets(a);

    int max = 0;
    int max_position = 0;
    int word_length = 0;

    int i;
    for (i = 0; i <= strlen(a); i++) {
        if (is_letter(a[i]) == 1) {
            word_length += 1;
        }
        else {
            if (word_length > max) {
                max = word_length;
                max_position = i - max;
            }
            word_length = 0;
        }        
    }


    for (i = max_position; i < max_position + max; i++) {
        printf("%c", a[i]);
    }
    return 0;
}