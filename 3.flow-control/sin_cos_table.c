/* Programme prints table of values for sine and cosine
between (0,1)
Keira, 1st Jul 2026
*/
#include <stdio.h>
#include <math.h>

void table_printer(int i) {
    double n = i/100.0; //double n is calculated with int i divided by double 100.0
    //print and format n, sin(n), and cos(n)
    printf("%-10lf %-10lf %-10lf\n", n, sin(n), cos(n));
    
    //return 0;//returns 0 to indicate succesful run
}

int main(void) {
    // print and format header
    printf("%-10s %-10s %-10s\n", "n (0 to 1)", "sin(n)", "cos(n)");
    printf("---------------------------------------\n");
    
    // for loop to print values for 0-1 values for sine and consine
    for (int i=0; i<=100; i++) //in this case ++n and n++ no difference, because it only affects value of the expression
    // this loop results in i 0-100, and n 0.01 - 1.00
    {
        table_printer(i);
    }; //end of loop

    return 0; //returns 0 to indicate succesful run
}