/*trying string counter again from scratch*/
#include <stdio.h>

int main() {
    int blanks=0, digits=0, letters=0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            blanks++;
        else if (('0' <= c) && (c <= '9')) // ('0' <= c <= '9') this is wrong 
            digits++;
        else if ((('A' <= c) && (c <= 'Z')) || (('a' <= c) && (c <= 'z'))) 
            letters++;
    };

    printf("%d, %d, %d\n", blanks, digits, letters);
    return 0;
}