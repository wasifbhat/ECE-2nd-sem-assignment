#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", i);
        }
    }
}

