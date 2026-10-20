#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    int number = 0;
    j = 2;
    while (j <= n)
    {
        i = 2;
        int a = 1;
        while (i < j && a == 1)
        {
            if (j % i == 0)
            {
                a = 0;
            }
            i++;
        }
        if (a == 1)
        {
            number++;
        }
       j++;
    }
    printf("%d", number);
}