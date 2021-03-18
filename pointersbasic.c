#include <stdio.h>

int main() {
    int* myPointer;
    int myVariable = 100;

    printf("The value of myVariable is %d and the address is %p\n", myVariable, &myVariable);
    printf("The value of myPointer is %p and the value is %d\n", myPointer, *myPointer);
    printf("Changing pointer\n");
    myPointer = &myVariable;
    printf("Now the value of myPointer is %d and the address is %p\n", *myPointer, myPointer);
    printf("Changing value to 200\n");
    *myPointer = 200;
    printf("Now the value of myVariable is %d and the value at myPointer is %d\n", myVariable, *myPointer);
    if (&myVariable == myPointer) {
        printf("And the addresses are the same.\n");
    }
    return 0;
}