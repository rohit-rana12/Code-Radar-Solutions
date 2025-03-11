#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[N], min_scorer;

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, &students[i].name, &students[i].marks);

        if (i == 0 || students[i].marks < min_scorer.marks) {
            min_scorer = students[i];
        }
    }

    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", 
           min_scorer.roll_number, min_scorer.name, min_scorer.marks);

    return 0;
}
