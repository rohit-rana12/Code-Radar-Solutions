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

    struct Student students[N], top_scorer;
    
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        
        if (i == 0 || students[i].marks > top_scorer.marks) {
            top_scorer = students[i];
        }
    }

    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", 
           top_scorer.roll_number, top_scorer.name, top_scorer.marks);

    return 0;
}
