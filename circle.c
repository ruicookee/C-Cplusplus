/*
To calc area of circle in metres
*/
#include <stdio.h>

#define PI 3.14159 //preprocessor directive too, but not a var, just text substitution
// #define NAME value
// or you can even do func-like macro #define SQUARE(x) ((x) * (x))
// rmb () cause dumb text replacement

int main() {
    double area = 0.0, radius = 0.0; // double decimals with higher precision than float
    printf("Enter Radius: ");
    scanf("%lf", &radius); //scanf("format", varaible_address)
    area = PI * radius * radius;
    printf("Radius of %lf metres; area is %lf sqmetres\n", radius, area);
    return 0;
}

/*format specifiers
%d	integer (int)
%f	float
%lf	double
%c	character
%s	string
*/