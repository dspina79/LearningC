#include <stdio.h>

int main() {
    char resp;
    char ek; // enter key or carriage return
    int iteration = 0;
    do {
        if (iteration > 0) {
            printf("\nThis program has been going on %d times.", iteration);
        }
        printf("\nDo you want to keep this program running? Press 'y' to continue or any other character to end. ");
        scanf("%c%c", &resp, &ek);
        iteration++;
    } while (resp == 'y');
    return 0;
}