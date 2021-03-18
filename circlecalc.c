#include <stdio.h>
#include <math.h>

float getVolume(float radius) {
    return (4/3) * M_PI * radius * radius * radius;
}

float getCircumference(float radius) {
    return 2 * radius * M_PI;
}

float getArea(float radius) {
    return radius * radius * M_PI;
}

int main() {
    float r;
    printf("Input the radius: ");
    scanf("%f", &r);
    float c = getCircumference(r);
    float a = getArea(r);
    float v = getVolume(r);
    printf("Radius\t\tCircumference\t\tArea\t\tVolume\n");
    printf("%f\t%f\t\t%f\t%f\n", r, c, a, v);
    return 0;
}