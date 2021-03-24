#include <stdio.h>

union NumberData {
    int intNumber;
    float floatNumber;
    long longNumber;
};

int main() {
    float val;
    union NumberData numData;
    printf("The size of the numData union is %lu\n", sizeof(numData));
    printf("Enter an floating point value: ");
    scanf("%f", &val);
    numData.intNumber = val;
    numData.floatNumber = val;
    numData.longNumber = val;

    printf("NumData.Int = %d\n", numData.intNumber);
    printf("NumData.Float = %f\n", numData.floatNumber);
    printf("NumData.Long = %ld\n", numData.longNumber);

    return 0;
}