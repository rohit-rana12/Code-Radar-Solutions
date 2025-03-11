#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int rollNumber;
    char name[50];
    float marks, totalMarks = 0.0;


    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &rollNumber, name, &marks);
        totalMarks += marks;
    }

    float averageMarks = totalMarks / n; 
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
