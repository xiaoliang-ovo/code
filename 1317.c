#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int digit[n];
    int i = 0;
    while (i < n)
    {
        scanf("%d", &digit[i]);
        i++;
    }
    int count = 0;
    i = 1;
    while (i < n - 1)
    {
        if (i + 1 < n && digit[i] < digit[i - 1])
        {
        while (i + 1 < n && digit[i] == digit[i + 1])
        {
            i++;
        }
        if (i + 1 < n && digit[i + 1] > digit[i])
        {
            count++;
        }
        }
        i++;
    }
    printf("%d", count);
    return 0;
}