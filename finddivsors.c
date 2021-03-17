#include <stdio.h>

void printDivisors(int sourceNumber) {
    if (sourceNumber <= 1) {
        printf("%d\n", 1);
    } else {
        for (int i = sourceNumber - 1; i > 1; i--) {
            if (sourceNumber % i == 0) {
                printf("%d\n", i);
            }
        }
    }
}


int main() {
    int num;
    printf("Enter a number to find it's divisors. ");
    scanf("%d", &num);
    printDivisors(num);
    return 0;
}