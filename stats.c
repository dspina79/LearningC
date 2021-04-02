#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TRUE 1

float avg(int *, int);
float myStdDev(int *, int);

int main() {
    static int arr[1];
    int x = 0, N = 0;

    while (TRUE) {
        printf("Enter a number. Use -1 to exit. >> ");
        scanf("%d", &x);
        if (x == -1) {
            break;
        }

        N += 1;
        if (sizeof(arr) < N) {
            // copy elements to new array
            int temp[N];

            for (int i = 0; i < sizeof(arr); i++) {
                temp[i] = arr[i];
            }
            realloc(arr, N);
            free(arr);
            for (int i = 0; i < sizeof(temp); i++) {
                arr[i] = temp[i];
            }
        }
        arr[N-1] = x;
    }

    if (N == 0) {
        printf("Nothing to see here. Nothing was entered.\n");
        return 0; 
    }

    // determine the mean
    float mean = avg(arr, N);
    float sd = myStdDev(arr, N);
    printf("The average of the values is %f.\n", mean);
    printf("The standard deviation of the values is %f.\n", sd);
    return 0;
}

float avg(int *x, int N) {
    int sum = 0;

    for (int i = 0; i < sizeof(*x); i++) {
        sum += x[i];
    }

    return ((float)sum) / ((float)N);
}

float myStdDev(int *x, int N) {
    float mean = avg(x, N);
    float numerator = 0;

    for (int i = 0; i < sizeof(x); i++) {
        numerator += (((float)x[i] - mean) * ((float)x[i] - mean));
    }

    float div = (numerator / (float)N);
    
    return sqrt(div);
}