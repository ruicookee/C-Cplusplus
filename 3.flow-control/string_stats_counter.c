/* Func counts blanks, digits, letters, and others */

#include <stdio.h>

int main() {
    int blanks=0, digits=0, letters=0, others=0;
    int c; // declaration of variable c to save getchar() return values
    // in c, getchar() returns int, and getchar() can sometimes return -1, which char c cannot store
    
    while ((c = getchar()) != EOF) { // getchar() reads one next char each only
    // getchar() returns an int, not char. EOF usually -1 must be an int
    // while keeps it looping and storing each char in c until EOF
    // basically the same as `while string and string != end of string:`
        if (c == ' ') // again, c is an int, so is ' ' (what?!)
            blanks++;
        else if (c >= '0' && c <='9')
            digits++;
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else
            others++;
    };
    printf("blanks = %d, digits = %d, letters = %d, others = %d\n", blanks, digits, letters, others);
    
    return 0;
}
