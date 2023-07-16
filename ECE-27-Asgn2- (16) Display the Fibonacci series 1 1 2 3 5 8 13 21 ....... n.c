#include <stdio.h>

int fibonacciSeries(int n) 
{
    int prev = 0, curr = 1, next;
    
    printf("Fibonacci Series up to %d: ", n);
    
    printf("%d %d ", prev, curr);
    
    while (curr + prev <= n) 
	{
        next = curr + prev;
        printf("%d ", next);
        prev = curr;
        curr = next;
    }
    
    printf("\n");
}

int main() 
{
    int n;
    
    printf("Enter the number to display the Fibonacci series up to: ");
    scanf("%d", &n);
    
    fibonacciSeries(n);
}

