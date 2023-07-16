#include <stdio.h>

int main() 
{
    int number, digit1, digit2, digit3, digit4, sum;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    digit1 = number % 10;
    number = number / 10;

    digit2 = number % 10;
    number = number / 10;

    digit3 = number % 10;
    number = number / 10;

    digit4 = number % 10;

    sum = digit1 + digit2 + digit3 + digit4;

    printf("The sum of digits is: %d\n", sum);
}

