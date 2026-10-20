#include <stdio.h>
int main()
{
    int apple[10];
    int i = 0;
    while (i < 10)
    {
        scanf("%d", &apple[i]);
        i++;
    }
    int height = 0;
    scanf("%d", &height);
    i = 0;
    int count = 0;
    while (i < 10)
    {
        if (apple[i] <= height + 30)
        {
            count++;
        }
        i++;
    }
    printf("%d\n", count);
}