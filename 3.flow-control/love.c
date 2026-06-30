/*prints a statement of length proportional to how much you love them*/

#include <stdio.h>

int multiplier(){
    int degree=0;

    printf("How much do you love them?(0 - 5): ");
    scanf("%d", &degree);

    int final_love = degree*2;
    return final_love;
}

int main(){
    int n = multiplier();

    printf("I love you");
        
    if (n == 0)
        printf(", not.\n");
    else 
    {
        while (n > 0) 
        {
            printf(" very");
            n--;
        };
        printf(" much.\n");
    };
    
    return 0;
}