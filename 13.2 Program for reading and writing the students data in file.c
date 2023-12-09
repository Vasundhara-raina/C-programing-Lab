#include <stdio.h>

// Define the structure for student data
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Open the file for writing
    FILE *file = fopen("student_data.txt", "w");

    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Input the number of students
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input and write student data to the file
    for (int i = 0; i < numStudents; ++i) {
        struct Student student;

        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Roll Number: ");
        scanf("%d", &student.rollNumber);
        printf("Total Marks: ");
        scanf("%f", &student.marks);

        // Write student data to the file
        fprintf(file, "%s %d %.2f\n", student.name, student.rollNumber, student.marks);
    }

    // Close the file
    fclose(file);

    printf("\nStudent data has been written to the file 'student_data.txt'.\n");

    return 0;
}