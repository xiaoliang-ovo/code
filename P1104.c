#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char name[n][20];
    int birth[n][3];
    int i = 0;
    int id[n];
    while (i < n)
    {
        scanf("%s %d %d %d", name[i], &birth[i][0], &birth[i][1], &birth[i][2]);
        id[i] = i;
        i++;
    }
    for (i = 0; i < n - 1; i++)
    {
        int j;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (birth[j][0] > birth[j + 1][0] ||
               (birth[j][0] == birth[j + 1][0] &&
                birth[j][1] > birth[j + 1][1]) ||
               (birth[j][0] == birth[j + 1][0] &&
                birth[j][1] == birth[j + 1][1] &&
                birth[j][2] > birth[j + 1][2]) ||
               (birth[j][0] == birth[j + 1][0] &&
                birth[j][1] == birth[j + 1][1] &&
                birth[j][2] == birth[j + 1][2] &&
                id[j] < id[j + 1]))
               {
                int temp_birth[3];
                char temp_name[20];
                temp_birth[0] = birth[j][0];
                temp_birth[1] = birth[j][1];
                temp_birth[2] = birth[j][2];
                birth[j][0] = birth[j + 1][0];
                birth[j][1] = birth[j + 1][1];
                birth[j][2] = birth[j + 1][2];
                birth[j + 1][0] = temp_birth[0];
                birth[j + 1][1] = temp_birth[1];
                birth[j + 1][2] = temp_birth[2];
                int k;
                for (k = 0; k < 20; k++)
                {
                    temp_name[k] = name[j][k];
                    name[j][k] = name[j + 1][k];
                    name[j + 1][k] = temp_name[k];  
                }
                 int temp_id;
                    temp_id = id[j];
                    id[j] = id[j + 1];
                    id[j + 1] = temp_id;
                }  
            
        }
    }
    for (i = 0; i < n; i++)
    {
       printf("%s\n", name[i]);
    }
} 