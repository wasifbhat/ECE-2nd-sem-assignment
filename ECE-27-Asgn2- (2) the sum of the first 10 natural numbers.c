#include <stdio.h>
int main()
{
    int  s, sum = 0;

    printf("The first 10 natural number is :\n");
 
    for (s = 1; s <= 10; s++)
    {
        sum = sum + s;
        printf("%d ",s);    
    }
    printf("\nThe Sum is : %d\n", sum);
}
