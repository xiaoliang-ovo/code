#include <stdio.h>
int main()
{
    int month = 1;
    int give = 300; int money = 0;
    int spend[12];
    int total = 0;
    while (month <= 12 )
    {
        scanf("%d", &spend[month - 1]);
        money += give;
        int balance = money - spend[month - 1];
        if (balance < 0)
        {
            printf("-%d", month);
            return 0;
        }
        int save = balance / 100 * 100;
        money = balance % 100;
        total += save;
        month++;
    }
    int interest = total / 10 * 2;
    int final = total + interest + money;
    printf("%d", final);
    return 0;
}