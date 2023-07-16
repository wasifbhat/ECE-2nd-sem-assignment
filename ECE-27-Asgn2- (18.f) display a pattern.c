#include <stdio.h>

int displayPattern(int n) 
{
    int i, j, num = 1;

    for (i = 1; i <= n; i++) 
	{
        for (j = 1; j <= n - i; j++) 
		{
            printf("  ");
        }
        for (j = 1; j <= (2 * i) - 1; j++) 
		{
            printf("%d ", num);
        }
        printf("\n");
        num++;
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

