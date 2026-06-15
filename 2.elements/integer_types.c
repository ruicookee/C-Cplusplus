#include <stdio.h>

int main(void) {
    short short_a = 5;
    int normal_a = 67;
    unsigned unsigned_a = 67u;
    long long_a = 67l;

    printf("short_a is %hd, divide by int 2 is %d\n", short_a, short_a/2);

    printf("short_a is %hd, divide by float 2.0 is %lf\n", short_a, short_a/2.0);

    printf("67 as char using normal int is %c\n", normal_a);

    printf("67 as char using unsigned is %c\n", unsigned_a);

    // NOT DOABLE printf("67 as char using long is %c\n", long_a);

    printf("sizes in bytes of short: %lu\n", sizeof(short_a));
    printf("sizes in bytes of int: %lu\n", sizeof(normal_a));
    printf("sizes in bytes of unsigned: %lu\n", sizeof(unsigned_a));
    printf("sizes in bytes of long: %lu\n", sizeof(long_a));    
    
    return 0;
}