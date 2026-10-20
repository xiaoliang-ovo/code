#include <stdio.h>
int main()
{
    char word[101];
    scanf("%s", word);
    int i = 0;
    while (word[i] != '\0')
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - 32;
        }
        i++;
    }
    printf("%s\n", word);
    return 0;
}