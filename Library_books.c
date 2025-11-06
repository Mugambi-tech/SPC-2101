/*
Dan Kimathi Mugambi 
CT101/G/26458/25
Library books record 
06/11
 */
#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a"); // append mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fp, "%s", title);
    fclose(fp);

    printf("Book title successfully stored!\n");
    return 0;
}
 