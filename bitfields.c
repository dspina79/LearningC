#include <stdio.h>
#include <string.h>

struct Ages {

    unsigned int agePerson: 7;
    unsigned int ageDog: 5;
    unsigned int ageHamster: 3;
};

int main() {
    struct Ages age;
    unsigned int myAge;
    printf("Enter in your age: ");
    scanf("%du", &myAge);
    age.agePerson = myAge;
    age.ageDog = age.agePerson;
    age.ageHamster = age.agePerson;

    printf("Your age: %u\n", age.agePerson);
    printf("Dog age as you: %u\n", age.ageDog);
    printf("Hamster age as you: %u\n", age.ageHamster);
    return 0;
}