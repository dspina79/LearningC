#include <stdio.h>

void increment(int *);
void decrement(int *);

int main() {
    int x;
    int incrementTimes, decrementTimes;
    void (*p[])(int *) = {increment, decrement};
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter the number of times to increment: ");
    scanf("%d", &incrementTimes);
    printf("Enter the number of times to decrement: ");
    scanf("%d", &decrementTimes);

    for (int i = 0; i < incrementTimes; i++) {
        p[0](&x);
        printf("Incremented x. New value is %d\n", x);
    }

    for (int i = 0; i < decrementTimes; i++) {
        p[1](&x);
        printf("Decremented x. New value is %d\n", x);
    }
    return 0;
}


void increment(int *x) {
    *x += 1;
}

void decrement(int *x) {
    *x -= 1;
}