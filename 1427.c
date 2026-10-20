#include <stdio.h>
int main()
{
    int a[100];
    int i = 0;
    while (i < 100)
    {
        scanf("%d", &a[i]);
        i++;
        if (a[i - 1] == 0)
        {
            i--;
            break;
        }
    }
    while (i > 0)
    {
        i--;
        printf("%d ", a[i]);
    }
    return 0;
}