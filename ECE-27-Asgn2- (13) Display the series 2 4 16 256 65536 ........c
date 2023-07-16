#include <stdio.h>
#include <math.h>

int main() 
{
    int n, i;
    long long num = 2;

    printf("Enter the total number : ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 1; i <= n; i++) 
	{
        printf("%lld ", num);
        num = num * num;
    }

    return 0;
}

