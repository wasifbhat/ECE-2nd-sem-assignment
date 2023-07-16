#include <stdio.h>

int main() 
{
    int marks[5];
    int totalMarks = 500;
    int i;
    float percentage;
    char grade;

    printf("Enter marks for 5 subjects:\n");

    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int total = 0;
    for (i = 0; i < 5; i++) 
	{
        total += marks[i];
    }

    percentage = ((float)total / totalMarks) * 100;

    if (percentage >= 90) 
	{
        grade = 'A';
    } else if (percentage >= 80) 
	{
        grade = 'B';
    } else if (percentage >= 70) 
	{
        grade = 'C';
    } else if (percentage >= 60) 
	{
        grade = 'D';
    } else 
	{
        grade = 'F';
    }

    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

}

