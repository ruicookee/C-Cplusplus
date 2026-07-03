#include <stdio.h>

extern int reps = 0;

void func(void) {
    static int called = 0;
    printf("func called %d times\n", called);
    called++;
    reps = reps + called;
}

int main(void) {
    auto int i = 1;
    const int Limit = 10;
    for (i=1; i < Limit; i++) 
    {
        printf("i local = %d, reps global = %d\n", i, reps);
        func();
    }
    return 0;
}