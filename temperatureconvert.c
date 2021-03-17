#include <stdio.h>

float convertToCelcius(float f) {
    return (f - 32.0) * (5.0/9.0);
}

float convertToFarenhiet(float c) {
    return ((9.0/5.0) * c) + 32;
}

int main() {
    int selection;
    float degrees;
    float conversion;

    printf("1. Convert F to C\n2. Convert C to F\n");
    printf("Select: ");
    scanf("%d", &selection);

    if (selection == 1) {
        printf("Enter the degrees in farenhiet: ");
        scanf("%f", &degrees);
        conversion = convertToCelcius(degrees);
        printf("%f degrees farenheit is %f degrees celcius.\n", degrees, conversion);
    } else {
        printf("Enter the degrees in celcius: ");
        scanf("%f", &degrees);
        conversion = convertToFarenhiet(degrees);
        printf("%f degrees celcius is %f degrees farenhiet.\n", degrees, conversion);
    }

    return 0;
}