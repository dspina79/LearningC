#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 40;
    register int* regAge = &age;
    printf("The current age is %d\n", age);
    *regAge = 41;
    printf("Now the age is %d\n", age);

    return 0;
}