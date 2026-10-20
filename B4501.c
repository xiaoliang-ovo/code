
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int number = 0;
    int i, j;

    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        i++;
    }

    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            int b = 1;

            if (i > 0)
            {
                if (a[i - 1][j] < a[i][j])
                {
                    b = 0;
                }
            }

            if (i < n - 1)
            {
                if (a[i + 1][j] < a[i][j])
                {
                    b = 0;
                }
            }

            if (j > 0)
            {
                if (a[i][j - 1] < a[i][j])
                {
                    b = 0;
                }
            }

            if (j < m - 1)
            {
                if (a[i][j + 1] < a[i][j])
                {
                    b = 0;
                }
            }

            if (i > 0 && j > 0)
            {
                if (a[i - 1][j - 1] < a[i][j])
                {
                    b = 0;
                }
            }

            if (i > 0 && j < m - 1)
            {
                if (a[i - 1][j + 1] < a[i][j])
                {
                    b = 0;
                }
            }

            if (i < n - 1 && j > 0)
            {
                if (a[i + 1][j - 1] < a[i][j])
                {
                    b = 0;
                }
            }

            if (i < n - 1 && j < m - 1)
            {
                if (a[i + 1][j + 1] < a[i][j])
                {
                    b = 0;
                }
            }

            if (b == 1)
            {
                number++;
            }

            j++;
        }
        i++;
    }

    printf("%d", number);
    return 0;
}
