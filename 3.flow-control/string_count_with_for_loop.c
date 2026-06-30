/*gets string stats but this time with a for loop*/

#include <stdio.h>

int main() {
    int letters=0, blanks=0, total_chars=0;
    int c;

    // for (initialisation; condition; update) {}
    // for (int i=0; i < 10; i++)
    for (; (c = getchar()) != EOF; total_chars++)
    {
        if (c == ' ')
            blanks++;
        else if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') )
            letters++;
    };

    printf("blanks = %d, letters = %d,\n", blanks, letters);
    printf("total chars = %d\n", total_chars);
    
    return 0;
}