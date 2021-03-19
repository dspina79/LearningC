#include <stdio.h>

int main() {
    int arrSize;
    printf("Enter array size: ");
    scanf("%d", &arrSize);

    if (arrSize < 2) {
        printf("An array of at least size 2 is required.");
        return 0;
    }

    int arr[arrSize];
    int index = 0;
    arr[index++] = 1;
    arr[index++] = 1;
    while (index < arrSize) {
        arr[index] = arr[index - 1] + arr[index - 2];
        index++;
    }
    for (int i = 0; i < arrSize; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}