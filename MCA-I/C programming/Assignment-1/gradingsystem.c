#include <stdio.h>

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("The student's grade is A.\n");
    } else if (score >= 80) {
        printf("The student's grade is B.\n");
    } else if (score >= 70) {
        printf("The student's grade is C.\n");
    } else if (score >= 60) {
        printf("The student's grade is D.\n");
    } else {
        printf("The student's grade is F.\n");
    }

    return 0;
}