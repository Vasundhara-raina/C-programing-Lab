#include <stdio.h>
char sub[3][10]={"Physics","Maths","C-Lang"};
// Define the structure for student data
struct Student {
    char name[50];
    int rollNumber;
    int marks[3];
    float per;
};

// Function to display student data
void displayStudent(struct Student studentArray[], int size) {
    printf("\nStudent Data:\n");
    for (int i = 0; i < size; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", studentArray[i].name);
        printf("Roll Number: %d\n", studentArray[i].rollNumber);
        for(int j=0;j<3;j++)
        {
        printf("%s: %d\n", sub[j],studentArray[i].marks[j]);
        }
        printf("Percentage-%.2f",studentArray[i].per);
        printf("--------------------\n");
    }
}

int main() {
    int n;
    printf("Enter number of students-");
    scanf("%d",&n);
    // Declare an array of structures to store student data
    struct Student studentArray[n]; // You can adjust the size as needed

    // Input student data
    for (int i = 0; i < n; ++i)
     {
        int sum=0;
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", studentArray[i].name);
        printf("Roll Number: ");
        scanf("%d", &studentArray[i].rollNumber);
        printf("Marks: \n");
        for(int j=0;j<3;j++)
        {
            printf("%s-",sub[j]);
            scanf("%d", &studentArray[i].marks[j]);
            sum=sum+ studentArray[i].marks[j];
        }
        studentArray[i].per = sum/3;
        printf("--------------------\n");
    }

    // Pass the structure array to the function to display data
    displayStudent(studentArray, n); // Assuming the array size is 3

    return 0;
}