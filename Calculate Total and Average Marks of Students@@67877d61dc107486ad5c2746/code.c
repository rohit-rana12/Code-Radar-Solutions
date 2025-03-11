#include <stdio.h>

typedef struct {
    int rollNumber;
    char name[50];
    float marks;
} Student;

int main() {
    int n; // Number of students
    //printf("Enter the number of students: ");
    scanf("%d", &n);

    Student students[n];
    float totalMarks = 0.0;

   // printf("Enter roll number, name, and marks separated by space:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        totalMarks += students[i].marks; // Add the marks to totalMarks
    }
    
    printf("Total Marks: %.2f\n",totalMarks);
    float averageMarks = totalMarks / n; // Calculate the average
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}