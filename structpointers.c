#include <stdio.h>
#include <stdlib.h>

struct ClassGrade {
    char grade;
    int teacherId;
    int studentid;
    int classid;
};

void printDetails(struct ClassGrade grade);
int main() {
    struct ClassGrade grade;
    printf("Supply the grade: ");
    scanf("%c", &grade.grade);
    grade.classid = 101;
    grade.studentid = 8739245;
    grade.teacherId = 6890;
    printDetails(grade);
    return 0;
}

void printDetails(struct ClassGrade grade) {
    printf("Congratulations, the grade is a %c\n", grade.grade);
}