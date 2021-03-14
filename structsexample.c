#include <stdio.h>
#include <string.h>

struct Author {
    char firstName[25];
    char lastName[40];
};

struct Book {
    char title[100];
    int yearPublished;
    int id;
    struct Author auth;
};

void printBook(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s, %s\n", book.auth.lastName, book.auth.firstName);
    printf("Year: %d\tId: %d\n", book.yearPublished, book.id);
}

int main() {
    struct Book book1;
    struct Author author1;
    strcpy(author1.firstName, "Stephen");
    strcpy(author1.lastName, "King");
    strcpy(book1.title, "The Shining");
    book1.id = 1;
    book1.yearPublished = 1978;
    book1.auth = author1;

    printBook(book1);
    return 0;
}