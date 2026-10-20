#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i = 0;
    int number[n];
    while (i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        number[i] = 0;
        int j = 0;
        while (j < i)
        {
            if (a[i] > a[j])
            {
                number[i]++;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%d ", number[i]);
        i++;
    }
    return 0;
}