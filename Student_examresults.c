/*
Dan Kimathi Mugambi 
CT101/G/26458/25
Exam results
06/11
 */
 #include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student information
struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    //  Create the binary file and store records
    file = fopen("results.dat", "wb"); // write binary mode 
    if (file == NULL) {
        perror("Error creating file");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // clear newline after scanf

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        fgets(s.name, sizeof(s.name), stdin);

        // Remove newline from fgets
        for (int j = 0; s.name[j] != '\0'; j++) {
            if (s.name[j] == '\n') {
                s.name[j] = '\0';
                break;
            }
        }

        printf("Enter registration number: ");
        scanf("%d", &s.regNo);

        printf("Enter total marks: ");
        scanf("%f", &s.marks);
        getchar(); // clear newline

        fwrite(&s, sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("\nStudent records successfully written to results.dat\n\n");

    // Read all student records from the binary file
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    //  Display the name and marks of each student 
    printf("Name\t\tMarks\n");
    printf("--------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("%-15s %.2f\n", s.name, s.marks);
    }

    fclose(file);
    return 0;
} 