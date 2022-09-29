#include <stdio.h>
int main() {
    int numGrades = 0;
    double avg = 0.0;
    int grade = 0;
    int total = 0;

    do {
        printf("Enter a grade #%d: ", numGrades+1);
        scanf_s("%d", &grade);

            if (grade != -99) {
                total += grade;
                numGrades++;
            }
            
    } while (grade != -99);



    avg = total / (double) numGrades;
    printf("%f", avg);
        printf("Have a good day!");
         printf("See you next time!");
    return 0;
}