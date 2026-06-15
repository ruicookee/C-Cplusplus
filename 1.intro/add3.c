/* sum of 3 numbers*/

#include <stdio.h>

int main(void) {
    float a, b, c, sum;
    printf("Input three floats: ");
    scanf("%f%f%f", &a, &b, &c);
    sum = a+b+c;
    printf("sum = %f\n\n", sum);
    return 0;
}