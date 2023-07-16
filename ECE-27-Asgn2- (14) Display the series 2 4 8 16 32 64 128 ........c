#include <stdio.h>

int main() 
{
    int n, i;
    int num = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 0; i < n; i++) 
	{
        printf("%d ", num);
        num *= 2;
    }
}

