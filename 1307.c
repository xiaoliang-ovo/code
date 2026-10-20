#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int digit;
    int ret = 0;
    int negative = 0;
    if (N < 0)
    {
        N = -N;
        negative = 1;
    }
    while (N > 0)
    {
        digit = N % 10;
        ret = ret * 10 + digit;
        N /= 10;
    }
    if (negative == 1)
    {
        ret = -ret;
    }
    printf("%d", ret);
    return 0;
}