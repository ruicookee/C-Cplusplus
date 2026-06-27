/*
Rui Kee
Logical operators and helper functions
Decides whether or not to bring umbrella, depending on weather and whether youre out
27th Jun 2026
*/

#include <stdio.h>
// ask() receives inputs
int ask(int *out, int *weather) {
    printf("Are you going out today? (1/0): ");
    scanf("%d", out);
    printf("Is it raining outside? (1/0): ");
    scanf("%d", weather);
    
    return 0;
}

// eval() evaluates inputs
int eval(int con1, int con2) { //why 
    return (con1 && con2);
}

// main() puts helper funcs together
int main() {
    int out, weather;
    int result;

    ask(&out, &weather);
    result = eval(out, weather);

    if (result == 1)
        printf("Bring Umbrella\n");
    else
        printf("Dont Bring Umbrella\n");

    return 0;
}