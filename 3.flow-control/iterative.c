#include <stdio.h>

int main(void) {
    int counter = 5;

    while (counter > 0)
        printf("counter = %d\n", counter--);

    return 0;
}