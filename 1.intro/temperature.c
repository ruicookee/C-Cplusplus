/* Converts Fahrenheit to Celcius */
#include <stdio.h>

int main(void) {
    int fahrenheit, celsius;

    printf("Fahrenheit as integer: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32)/1.8; 
    //celsius remains as int (as declared), unlike in python
    printf("\n %d fahrenheit is %d celcius.\n", fahrenheit, celsius);
    return 0;
}