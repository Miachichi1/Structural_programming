#include <stdio.h>
#include <string.h>

// Define the Student structure
typedef struct {
    int registrationNumber;
    char firstName[50];
    char lastName[50];
    char courses[3][50];
} Student;

// Function to display student information
void displayStudent(Student s) {
    printf("Registration Number: %d\n", s.registrationNumber);
    printf("First Name: %s\n", s.firstName);
    printf("Last Name: %s\n", s.lastName);
    printf("Courses: %s, %s, %s\n", s.courses[0], s.courses[1], s.courses[2]);
}

// Function to edit student information
void editStudent(Student *s) {
    printf("Enter new registration number: ");
    scanf("%d", &s->registrationNumber);
    printf("Enter new first name: ");
    scanf("%s", s->firstName);
    printf("Enter new last name: ");
    scanf("%s", s->lastName);
    for (int i = 0; i < 3; i++) {
        printf("Enter new course %d: ", i+1);
        scanf("%s", s->courses[i]);
    }
}

int main() {
    // Create a student
    Student s1 = {123, "John", "Doe", {"Math", "Science", "English"}};

    // Display student information
    displayStudent(s1);

    // Edit student information
    printf("\nEditing student information...\n");
    editStudent(&s1);

    // Display updated student information
    printf("\nUpdated student information:\n");
    displayStudent(s1);

    return 0;
}