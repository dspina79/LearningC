#include <stdio.h>

int fact(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * fact(x -1);
    }
}

int main() {
    int startingNum, factValue;
    printf("Enter the starting number: ");
    scanf("%d", &startingNum);
    factValue = fact(startingNum);
    printf("%d! is %d\n", startingNum, factValue);
    return 0;
}