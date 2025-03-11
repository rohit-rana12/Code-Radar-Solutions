#include <stdio.h>

int main() {
    int n; // Number of students
    printf("");
    scanf("%d", &n);

    int rollNumber;
    char name[50];
    float marks, totalMarks = 0.0;

    printf("");

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &rollNumber, name, &marks);
        totalMarks += marks; // Add the marks to totalMarks
    }

    float averageMarks = totalMarks / n; // Calculate the average
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
