#include <stdio.h>
int main()
{
    char word[101];
    int count[26] = {0};

    scanf("%s", word);
    int i = 0;
    while (word[i] != '\0')
    {
        count[word[i] - 'a']++;
        i++;
    }
    int maxn = 0;
    i = 0;
    while (i < 26)
    {
        if(count[i] > maxn)
        {
            maxn = count[i];
        }
        i++;
    }
    int minn = 100;
    i = 0;
    while (i < 26)
    {
        if(count[i] > 0 && count[i] < minn)
        {
            minn = count[i];
        }
        i++;
    }
    int diff = maxn - minn;
    int prime = 1;

    if(diff < 2)
    {
        prime = 0;
    }
    else
    {
        i = 2;
        while (i * i <= diff)
        {
            if(diff % i == 0)
            {
                prime = 0;
                break;
            }
            i++;
        }
    }
    if (prime == 1)
    {
        printf("Lucky Word\n");
        printf("%d\n", diff);
    }
    else
    {
        printf("No Answer\n");
        printf("0\n");
    }
    return 0;
}