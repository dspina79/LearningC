#include <stdio.h>
#include <stdlib.h>

extern int add3(int x, int y, int z);

int main() {
    int age = 40;
    register int* regAge = &age;
    printf("The current age is %d\n", age);
    *regAge = 41;
    printf("Now the age is %d\n", age);

    int x = 1;
    int y = 2;
    int z = 3;
    int sum = add3(x, y, z);
    printf("The external sum of %d, %d, and %d is %d\n", x, y, z, sum);

    return 0;