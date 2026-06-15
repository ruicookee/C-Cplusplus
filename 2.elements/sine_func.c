/* Prints the sine of value between 0 and 1 (non-inclusive)
By: Keira Tan
Date: 15th Jun 2026 */
#include <stdio.h>
#include <math.h>

double get_input(void) {
    double x; //declare the value to be sined
    printf("0 < x < 1. Enter x: "); //prompts user to enter a value within range
    scanf("%lf", &x); //reads user input
    return x;
}

double compute_sine(double x) { //func take a double and returns sine of double as double
    double result;
    result = sin(x);
    return result;
}

int main(void) {
    double x = get_input();
    double result = compute_sine(x);
    printf("sine of %lf: %lf\n", x, sin(x)); //prints sine of value as double

    return 0;
}

