#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int rollNumber;
    char name[50];
    float marks;
} Student;

void inputStudentDetails(Student *students, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &students[i].rollNumber);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }
}

void searchStudent(Student *students, int n, int rollNumber) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
                   students[i].rollNumber, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student not found\n");
}

int main() {
    int n, rollNumber;
    Student students[MAX_STUDENTS];
    scanf("%d", &n);
    inputStudentDetails(students, n);
    scanf("%d", &rollNumber);
    searchStudent(students, n, rollNumber);
    return 0;
}