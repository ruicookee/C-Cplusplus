/*
Evaluates whether youd get a speeding ticket or not depending on speed travelled at
*/

#include <stdio.h>

int get_speed(float *speed) {
    printf("Enter speed: ");
    scanf("%f", speed);

    return 0;
}

int main() {
    float speed;
    get_speed(&speed);

    if (speed > 65)
        printf("Speeding Ticket for You\n");
    else
        printf("No speeding ticket\n");

    return 0;
}