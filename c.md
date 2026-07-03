# C Handbook

## if, else if, else

## while Loop

## for Loop



## Oddball Operators
### `condition ? expression_if_true : expression_if_false` 
`c = (a<b)? a:b`
- means if (a<b) then c=a; else c=b;



### ternarary operator code

a = (b = 7, c + d);
expression 1, expressison 2

evals expr 1 then evals expr2
value of entire expressioin is expr2




## Arrays
- `int ssn;` creates one int variable called ssn
- `int data[5];` creates an array of 5 ints of garbage memory
- `int data[5] = {1,2,3,4,5};` creates an array and assignes each element a value
- `int data[3] = 0` creates array and assigns each element as 0
- `int data[5] = {1,2}` creates array and only assigns first 2, the rest are 0
- `int data[] = {1,2,3}` auto populate 3
- `char data[] = {"I am cat"};` auto populate 9 cause of null terminator



#include <string.h>

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







main things that i need to tackle
- ternarary expressions
- how to use choice
- how to use string.h to compare strings
- what does fab from math do
- it is possible to define the function after main() but you need to provide a func prototype before main()