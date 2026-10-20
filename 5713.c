#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int x = n * 5;
    int y = n * 3 + 11;
    if (x < y)
    {
        printf("Local");/* code */
    }
    else
    {
        printf("Luogu");
    }
    return 0;
}