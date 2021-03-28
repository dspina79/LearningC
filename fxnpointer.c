#include <stdio.h>

void square(int *);
void cube(int *);
int add(int x, int y);
void call(void (*p)(int *), int x);

int main() {
    int x = 5, y = 6;
    void (*p[])(int *) = {square, cube};
    int (*q)(int, int) = {add};

    p[0](&x);
    p[1](&y);
    int z = q(x, y);
    
    printf("Using a function pointer, the square output is %d.\n", x);
    printf("Using a function pointer, the cube output is %d.\n", y);
    printf("Their sums are %d\n", z);
    printf("Passing function pointer as arg");
    call(square, 15);
    return 0;
}

void call(void (*p)(int *), int x) {
    p(&x);
    printf("x is now %d\n", x);
}

void square(int *x) {
    *x = *x * *x;
}

void cube(int *x) {
    *x = *x * *x * *x;
}

int add(int x, int y) {
    return x + y;
}