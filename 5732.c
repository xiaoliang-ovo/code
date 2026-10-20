#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1][n + 1];
    int i, j;
    i = 1;
    while (i <= n)
    {
        a[i][1] = 1;
        a[i][i] = 1;
        j = 1;
        while (j <= n)
        {
            if (i > 2 && j > 1 && j < i)
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
            j++;
        }
        i++;
    }
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d ", a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}