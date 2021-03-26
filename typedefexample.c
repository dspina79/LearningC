#import <stdio.h>
#import <stdlib.h>
#import <string.h>

typedef struct Animal {
    char *type;
    char *name;
    int age;
} Animal;

void printAnimalDetails(Animal a) {
    printf("The %s's name is %s.\nThey are %d years old.\n", a.type, a.name, a.age);
}

int main() {
    Animal a;
    a.type = malloc(20);
    a.name = malloc(20);
    printf("What type of animal is it? ");
    scanf("%s", a.type);
    printf("What is the animal's name? ");
    scanf("%s", a.name);
    printf("What is their age in years? ");
    scanf("%d", &(a.age));

    printAnimalDetails(a);
    return 0;
}

