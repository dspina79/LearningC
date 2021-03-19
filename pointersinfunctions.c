#include <stdio.h>

void square(int *x) {
    *x *= *x;
}

void cube(int *x) {
    int xcopy = *x;
    square(x);
    *x *= xcopy;
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    cube(&x);
    printf("The value cubed is %d\n", x);
    return 0;
}