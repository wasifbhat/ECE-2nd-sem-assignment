#include <stdio.h>

int displaySeries(int n) 
{
    int i;

    for (i = 1; i <= n; i++) 
	{
        printf("%d ", (i % 5) + 1);
    }
}

int main() 
{
    int n;

    printf("Enter the limit (n): ");
    scanf("%d", &n);

    printf("Series: ");
    displaySeries(n);
}

