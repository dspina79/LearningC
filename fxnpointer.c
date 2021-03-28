#include <stdio.h>

void square(int *);
void cube(int *);

int main() {
    int x = 5, y = 6;
    void (*p[])(int *) = {square, cube};
    p[0](&x);
    p[1](&y);

    printf("Using a function pointer, the square output is %d.\n", x);
    printf("Using a function pointer, the cube output is %d.\n", y);
    return 0;
}



void square(int *x) {
    *x = *x * *x;
}

void cube(int *x) {
    *x = *x * *x * *x;
}