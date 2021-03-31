#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber(int upperBound, int seed) {
    time_t t;
    int r;
    srand((unsigned) time(&t) + seed) ;
    r = (rand() % upperBound);

    return r;
}

int main() {
    int ub, seed;
    printf("Enter an upper bound: ");
    scanf("%d", &ub);
    seed = ub;

    for(int i = 0; i < 10; i++) {
        if (seed == 0) {
            seed += 1;
        }
        int r = generateNumber(ub, seed);
        printf("A random number between 0 and %d is %d.\n", ub, r);
        seed = r;
    }


    return 0;
}