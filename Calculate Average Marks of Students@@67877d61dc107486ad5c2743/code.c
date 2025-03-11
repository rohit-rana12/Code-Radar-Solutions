#include <stdio.h>

int main() {
    int n; // Number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int rollNumber;
    char name[50];
    float marks, totalMarks = 0.0;

    printf("Enter roll number, name, and marks separated by space:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &rollNumber, name, &marks);
        totalMarks += marks; // Add the marks to totalMarks
    }

    float averageMarks = totalMarks / n; // Calculate the average
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
