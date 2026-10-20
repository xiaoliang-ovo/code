#include <stdio.h>
int main ()
{
    int score = 0;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 60)
    {
        printf("You have passed.\n");
    }
    else
    {
        printf("You have failed.\n");
    }
}
