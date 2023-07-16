#include <stdio.h>

int main() 
{
    int number, originalNumber, remainder, reverseNumber = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number > 0) 
	{
        remainder = number % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        number /= 10;
    }

    printf("The reverse of %d is %d\n", originalNumber, reverseNumber);

    if (originalNumber == reverseNumber) 
	{
        printf("The number %d is a palindrome.\n", originalNumber);
    } else 
	{
        printf("The number %d is not a palindrome.\n", originalNumber);
    }
}

