#include <stdio.h>

int main() 
{
    int n, i;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        product *= i;
    }

    printf("Product of the series: %lld\n", product);
}

