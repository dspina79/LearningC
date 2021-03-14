#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the seccond number: ");
    scanf("%d", &y);
    int sum = add(x, y);
    printf("The sum of %d and %d is %d\n", x, y, sum);

    return 0;
}