/*script prints a table of squares and cubes
for values n to m, which are input by user
function protypes are used in the process

Keira, 3rd Jul 2026
*/

#include <stdio.h>

// function prototypes
int square(int);
int cube(int);

int main(void) {
    int n, m;

    printf("Enter n and m: ");
    scanf("%d %d", &n, &m); // delimiter is a blank space

    // print header and dividerfirst
    printf("%-10s %-10s %-10s\n", "Num (n-m)", "Squared", "Cubed");

    // loop through n to m
    for (int x=n; x<=m; x++) 
    {
        printf("%-10d %-10d %-10d\n", x, square(x), cube(x));
    }

    return 0;
}

int square(int x) {
    int result;
    
    result = x*x;
    
    return result;
}

int cube(int x) {
    int result;

    result = x*x*x;

    return result;
}