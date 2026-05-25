/* Calculate distance of maraothon in Kilometers */
#include <stdio.h>

int main (void) { //takes no arguments
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards/1760);
    //since yards int, if 1760 is used, youd get 0.00 since decimals are ignored
    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}

