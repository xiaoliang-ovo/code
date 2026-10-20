#include <stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n )
    {
        sum += i;
        i++;
    }
    printf("Sum: %d\n", sum);
}
