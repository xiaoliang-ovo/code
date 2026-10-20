#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    int score[n][3];
    int used[n];
    for (i = 0; i < n; i++)
    {
        used[i] = 0;
    }
    i = 0;
    while (i < n)
    {
        scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
        i++;
    }
    
    int sum[n];
    for (i = 0; i < n; i++)
    {
        sum[i] = score[i][0] + score[i][1] + score[i][2];
    }

    int id[n];
    for (i = 0; i < n; i++)
    {
        id[i] = i + 1;
    }
    int rank = 0;
        while (rank < 5)
        {
            int j = 0;
            while (j < n && used[j] == 1)
            {
               j++;
            }
            
            for (i = 0; i < n; i++)
            {
                if (used[i] == 0 && (sum[i] > sum[j] || (sum[i] == sum[j] && score[i][0] > score[j][0]) || (sum[i] == sum[j] && score[i][0] == score[j][0] && id[i] < id[j])))
                {
                    j = i;
                }
            }
            used[j] = 1;
            printf("%d %d\n", id[j], sum[j]);
            rank++;
        }


}