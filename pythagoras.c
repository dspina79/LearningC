#include <stdio.h>
#include <math.h>

double getHypotenuse(double a, double b) {
    return sqrt((a * a) + (b * b));
}

int main() {
    double a, b;
    printf("Enter the length marked 'a': ");
    scanf("%lf", &a);
    printf("Enter the length marked 'b': ");
    scanf("%lf", &b);
    double hypotenuse = getHypotenuse(a, b);
    printf("The calculated hypotenuse is %lf\n", hypotenuse);
    return 0;
}