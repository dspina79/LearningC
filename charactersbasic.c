#include <stdio.h>

int main() {
    char name[20];
    printf("Hello. What is your name? ");
    scanf("%s", name);
    printf("Hello, %s. How are you?\n", name);

    return 0;
}