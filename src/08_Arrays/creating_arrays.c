#include <stdio.h>

int main(){
    int instanceSize = 10;
    int grades[instanceSize];
    int count = 0;

    for (int count = 0; count < instanceSize; count++){
        printf("Enter the grade for student %d: ", count + 1);
        scanf("%d", &grades[count]);
        if (grades[count] < 0 || grades[count] > 100){
            printf("Invalid grade entered. Please enter a grade between 0 and 100.\n");
            count--;
        }
    }

    int totalGrades = 0;
    float averageGrade = 0;

    for (int count = 0; count < instanceSize; count++){
        totalGrades += grades[count];
    }

    averageGrade = (float)totalGrades / instanceSize;
    printf("The average grade is %.2f\n", averageGrade);

    return 0;
}