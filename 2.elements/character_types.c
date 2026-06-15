#include <stdio.h>

int main() {
    char c = 'a';
    printf("c in ACII is %d\n", c);
    printf("c the character %c\n", c);
    printf("consec characters are %c, %c, %c\n", c, c+1, c+2);
    printf("Bells %c%c%c\n", '\a', '\a', '\a');
    int test = 97;
    printf("%d\n", test);
    printf("%c\n", test);
    //seems liek char and int are interchangeable but not really
    // char is 1 byte and int is 4 bytes
    // char is a "small integer types"
    return 0;
}