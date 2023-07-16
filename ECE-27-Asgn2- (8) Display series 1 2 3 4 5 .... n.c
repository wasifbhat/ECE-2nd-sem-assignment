#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) 
	{
        printf("%d ", i);
    }

}

