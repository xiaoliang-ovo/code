#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    int i;
    int j;
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            a[i][j] = 0;
            j++;
        }
        i++;
    }
    i = 0;
    j = 0;
    int direction = 0;
    int number = 1;
    while (number <= n * n)
    {
        a[i][j] = number;
        number++;
    if (direction == 0) 
    {
        if (j + 1 < n && a[i][j + 1] == 0) 
        {
            j++;
        } 
        else 
        {
            direction = (direction + 1) % 4;
            i++;
        }
    } 
    else if (direction == 1)
    {
        if (i + 1 < n && a[i + 1][j] == 0) 
        {
            i++;
        } 
        else 
        {
            direction = (direction + 1) % 4;
            j--;
        }
    } 
    else if (direction == 2) 
    {
        if (j - 1 >= 0 && a[i][j - 1] == 0) 
        {
            j--;
        } 
        else 
        {
            direction = (direction + 1) % 4;
            i--;
        }
    } 
    else if (direction == 3) 
    {
        if (i - 1 >= 0 && a[i - 1][j] == 0) 
        {
            i--;
        } 
        else 
        {
            direction = (direction + 1) % 4;
            j++;
        }
    } 
    }
    i = 0;
    while (i < n)
    {
       j = 0;

       while (j < n)
        {
            printf("%3d", a[i][j]);
            j++;
        }   

    printf("\n");
    i++;
    }
}