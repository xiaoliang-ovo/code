#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[100];
    scanf("%s", a);
    n = n % 26;
    int i = 0;

    while (a[i] != '\0')
{
    if (a[i] + n > 'z')
    {
        a[i] = a[i] + n - 26;
    }
    else
    {
        a[i] = a[i] + n;
    }

    i++;
}
    printf("%s", a);
    return 0;
}