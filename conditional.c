#include <stdio.h>

//func that scans speed
void speed_scanner(int *speed) {
    printf("Input speed as int: ");
    scanf("%d", speed);
}

//func that return 1 if speeding
int speeding(int speed) {
    if (speed > 65)
        return 1;
    else
        return 0;
}


int main(void) { 
    int result;
    int speed;
    speed_scanner(&speed);

    if (speeding(speed))
        printf("Speeding Ticket\n");
    else
        printf("No Ticket\n");

    return 0;
}