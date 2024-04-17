#include <stdio.h>
#include <string.h>

typedef struct {
    char firstName[50];
    char lastName[50];
    char regNumber[50];
    char courses[3][50];
} Student;

void displayStudent(Student student) {
    printf("First Name: %s\n", student.firstName);
    printf("Last Name: %s\n", student.lastName);
    printf("Registration Number: %s\n", student.regNumber);
    printf("Courses: %s, %s, %s\n", student.courses[0], student.courses[1], student.courses[2]);
}

void editStudent(Student *student) {
    printf("Enter new first name: ");
    fgets(student->firstName, sizeof(student->firstName), stdin);
    student->firstName[strcspn(student->firstName, "\n")] = 0;  // remove trailing newline

    printf("Enter new last name: ");
    fgets(student->lastName, sizeof(student->lastName), stdin);
    student->lastName[strcspn(student->lastName, "\n")] = 0;  // remove trailing newline

    printf("Enter new registration number: ");
    fgets(student->regNumber, sizeof(student->regNumber), stdin);
    student->regNumber[strcspn(student->regNumber, "\n")] = 0;  // remove trailing newline

    for (int i = 0; i < 3; i++) {
        printf("Enter new course %d: ", i + 1);
        fgets(student->courses[i], sizeof(student->courses[i]), stdin);
        student->courses[i][strcspn(student->courses[i], "\n")] = 0;  // remove trailing newline
    }
}

int main() {
    Student student;

    // Initial input
    editStudent(&student);

    int choice;
    do {
        printf("\n1. Display student information\n");
        printf("2. Edit student information\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // consume trailing newline

        switch (choice) {
            case 1:
                displayStudent(student);
                break;
            case 2:
                editStudent(&student);
                break;
        }
    } while (choice != 3);

    return 0;
}