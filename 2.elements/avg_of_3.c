#include <stdio.h>

int main() {
    int a, b, c;
    double average;

    printf("Enter 3 integers separated by a space: \n");
    scanf("%d %d %d", &a, &b, &c);
    average = (a+b+c)/3.0;
    printf("Average of 3 Numbers is %lf\n", average);
    return 0;
}