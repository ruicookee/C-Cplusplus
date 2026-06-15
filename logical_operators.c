/* To bring or not to bring (an umbrella)
15th Jun 2026
*/
#include <stdio.h>

//get_inputs(give me the addresses of two ints), basically func expects 2 pointers to ints
void get_inputs(int *outside, int *weather) {
    //the func then writes into the 2 memories provided by caller
    //this is pass by reference, not pass by value, to c1 and c2 later
    printf("Enter if Outside (True=1, False=0): ");
    scanf("%d", outside); //since outside is alr a pointer, no need &

    printf("Enter if Rain (True=1, False=0): ");
    scanf("%d", weather);
}

int evaluation(int condition1, int condition2) { 
    if (condition1 && condition2) 
        return 1;
    else
        return 0;
}

int main(void) {
    int c1, c2;
    get_inputs(&c1, &c2);
    
    if (evaluation(c1, c2) == 1)
        printf("Bring umbrella\n");
    else
        printf("Dress normally\n");
    
    return 0;
}