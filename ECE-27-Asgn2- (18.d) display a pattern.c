#include <stdio.h>

void displayPattern(int n) 
{
    int i, j;

    for (i = 1; i <= n; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() 
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Pattern:\n");
    displayPattern(n);
}

