#include <stdio.h>
int main()
{
    int x, y = 0;
    scanf("%d %d", &x, &y);
    int year = x;
    int count = 0;
    int sample[1000];
    while (year <= y)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            sample[count] = year;
            count++;
        }
        year++;
    }

    printf("%d\n", count);
    int i = 0;
    while (i < count)
    {
        printf("%d ", sample[i]);
        i++;
    }
    return 0;
}