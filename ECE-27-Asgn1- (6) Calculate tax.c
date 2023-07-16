#include <stdio.h>

int main() 
{
    float income, tax, taxableIncome;

    printf("Enter your income: ");
    scanf("%f", &income);

    taxableIncome = income - 150000;

    if (taxableIncome <= 0) 
	{
        tax = 0;
    } else if (taxableIncome <= 150000) 
	{
        tax = taxableIncome * 0.1;
    } else if (taxableIncome <= 300000) 
	{
        tax = taxableIncome * 0.2;
    } else {
        tax = taxableIncome * 0.3;
    }

    printf("Tax to be paid: %.2f\n", tax);

}

