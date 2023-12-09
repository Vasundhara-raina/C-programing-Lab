#include<stdio.h>
char subject[3][10]={"Physics","Maths","C-Lang"};
// Define a structure for a student
struct Student {
    char name[50];
    float marks[3];
    float sum;
};

int main() {
    int i,j,n;

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures to store student information
    struct Student s[n];

    // Input student names and marks
    for (i = 0; i < n; i++) 
    {
        s[i].sum=0;
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter marks of %s:\n ", s[i].name);
        for(j=0;j<3;j++)
        {
            printf("%s-",subject[j]);
            scanf("%f", &s[i].marks[j]);
            s[i].sum = s[i].sum + s[i].marks[j];
        }
    }
    for (i = 0; i < n; i++) 
    {
        printf("\n---------------------------\n");
        printf("Student %d:\n ", i + 1);
        printf("Name-%s\n",s[i].name);
        printf("Marks of %s: \n", s[i].name);
        for(j=0;j<3;j++)
        {
        printf("%s-%.1f\n", subject[j], s[i].marks[j]);
        }
        printf("Total marks-%.1f\n",s[i].sum);
    }
    return 0;
}