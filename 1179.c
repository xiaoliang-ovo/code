#include <stdio.h>
int main()
{
    int L, R;
    scanf("%d %d", &L, &R);
    int count = 0;
    int i = L;
    int digit;
    int number;
    while (i <= R)
    {
        number = i;
        while (number > 0)
        {
        digit = number % 10;
        if (digit == 2)
        {
            count++;
        }
        number = number / 10;
    }
    i++;
    }
    printf("%d", count);
    return 0;
}