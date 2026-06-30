/*uses 
(condition) ? result_if_true : (else if condition) ? result_if_true: result_if_false;
*/

#include <stdio.h>

int main() {
    int speed;
    printf("Enter speed: ");
    scanf("%d", &speed);
    speed = (speed < 65) ? 65 : (speed < 75) ? 75 : 90;
    switch (speed)
    {
        case 65: printf("No speeding ticket\n"); break; //case has to be constant, either define or enum
        case 75: printf("Speeding Ticket\n"); break;
        case 90: printf("Expensive speeding ticket\n"); break;
        //default: ...
    };
    return 0;

}