/* prompts user for weight in kg and returns a
number of animals, of their choice, that also weigh that much*/
#include <stdio.h>
#include <string.h>

// function prompts user for weight in kg

// func takes weight in kg as argument, and calcs how many bunnies that is
int rabbits(double w) {
    double netherland_dwarf, rex;
    netherland_dwarf = w/1.0;
    rex = w/5.0;
    printf("You weigh about the same as %.1f netherland dwarf bunnies,\n", netherland_dwarf);
    printf("and %.1f rex bunnies\n", rex);

    return 0;
}

// func takes weight in kg as armgument and calcs how many dwarf hamsters that is
int hamsters(double w) {
    double syrian, dwarf;
    syrian = w/0.15;
    dwarf = w/0.035;
    printf("You weigh about the same as %.1f syrian hamsters,\n", syrian);
    printf("and %.1f dwarf hamsters\n", dwarf);

    return 0;
}

// func takes weight in kdg as argument, and calcs how many house cats that is
int cats(double w) {
    double siamese, maine_coon;
    siamese = w/5.0;
    maine_coon = w/11.0;
    printf("You weigh about the same as %.1f siamese cats,\n", siamese);
    printf("and %.1f maine coons\n", maine_coon);

    return 0;
}

//
int main() {
    double weight;
    char animal[20];
    int choice;

    printf("Please enter your weight in kg: ");
    scanf("%lf", &weight);

    printf("Do you like bunnies, hammies, or cats?: ");
    scanf("%19s", animal);

    choice = 
    (strcmp(animal, "bunnies") == 0) ? 1:
    (strcmp(animal, "hammies") == 0) ? 2:
    (strcmp(animal, "cats") == 0) ? 3 : 0;

    switch(choice)
    {
        case 1:
            rabbits(weight); break;
        case 2:
            hamsters(weight); break;
        case 3:
            cats(weight); break;
        default:
            printf("You are fat\n");
    };

    return 0;
}


