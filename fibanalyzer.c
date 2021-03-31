#include <stdio.h>
#include <stdlib.h>

int * getFibSeries(int *size) {

    if (*size < 3 || *size > 24) {
        printf("Invalid array size for Fib series. Setting to 6.\n\n");
        *size = 6;
    }

    static int* series;
    series = malloc(*size * sizeof(int));
    series[0] = 1;
    series[1] = 1;

    for (int i = 2; i < *size; i++) {
        series[i] = series[i -1] + series[i - 2];
    }
    return series;
}

int * analyze(int *arr, int *arrSize) {
    static int* newSeries;
    *arrSize  += -1;
    newSeries = malloc(*arrSize * sizeof(int));
    for (int i = 0; i < *arrSize; i++) {
        newSeries[i] = arr[i + 1] - arr[i];
    }

    return newSeries;
}

void printSeries(int *series, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", series[i]);
    }
    printf("\n");
}


int main() {
    int size;
    int originalSize;
    printf("Select the size of the FibArray: ");
    scanf("%d", &size);
    int *fibs = getFibSeries(&size);
    printf("Original Fibs\n");
    printSeries(fibs, size);
    originalSize = size;
    for (int i = 0; i < originalSize -  2; i++) {
        printf("Iteration %d:\n", i);
        fibs = analyze(fibs, &size);
        printSeries(fibs, size);
    }

    return 0;
}