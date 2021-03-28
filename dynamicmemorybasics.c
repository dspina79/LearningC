#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    int *b;

    a = (int *) malloc(sizeof(int));
    b = (int *) malloc(20); // 4 bytes - limit = 15

    *a = 128128;
    *b = 256256;

    printf("The value of a which should be 128128 is actually %d\n", *a);
    printf("The value of b which should be 256256 is actually %d\n", *b);


    free(a);
    free(b);

    printf("After free(a), the value of a is %d\n", *a);
    printf("After free(a), the value of b is %d\n", *b);

    return 0;
}