#include<stdio.h>

// Define a structure for a student
union Student {
    char name[50];
    int roll;
};

int main() {
    int n;

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures to store student information
    union Student s[n];

    // Input student names and marks
    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("\nStudent name-%s",s[i].name);
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);
        printf("\nRoll number-%d",s[i].roll);
    }
    return 0;
}