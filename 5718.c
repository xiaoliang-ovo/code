#include <stdio.h>
int main() 
{
    int n = 0;
    scanf("%d", &n);
    int number = 0;
    scanf("%d", &number);
    int min = number;
    int i = 1;
    while (i <= n - 1)
    {
        scanf("%d", &number);
        if (number < min)
        {
            min = number;
        }
        i++;
    }
    printf("%d\n", min);

}