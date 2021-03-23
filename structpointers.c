#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ClassGrade {
    char grade;
    int teacherId;
    int studentid;
    int classid;
};

struct Novel {
    char author[50];
    char title[100];
    int yearPublished;
    int numTimesPrinted;
};



void printDetails(struct ClassGrade grade);
void printBook(struct Novel *novel);
struct Novel getNewNovel();

int main() {
    struct ClassGrade grade;
    printf("Supply the grade: ");
    scanf("%c", &grade.grade);
    grade.classid = 101;
    grade.studentid = 8739245;
    grade.teacherId = 6890;
    printDetails(grade);

    struct Novel n = getNewNovel();
    printBook(&n);
    printBook(&n);
    return 0;
}

void printDetails(struct ClassGrade grade) {
    printf("Congratulations, the grade is a %c\n", grade.grade);
}

struct Novel getNewNovel() {
    struct Novel n;
    strcpy(n.author, "Stephen King");
    strcpy(n.title,"The Stand");
    n.yearPublished = 1980;
    n.numTimesPrinted = 0;

    return n; 
}

void printBook(struct Novel *novel) {
    printf("Printing the novel %s\n", novel->title);
    novel->numTimesPrinted++;
    printf("The novel has now been printed here %d times\n", novel->numTimesPrinted);
}