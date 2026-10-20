#include <stdio.h>

int main()
{
    int n;                       
    scanf("%d", &n);

    int a1, a2, a3;               
    scanf("%d %d %d", &a1, &a2, &a3);

    int b1, b2, b3;               
    scanf("%d %d %d", &b1, &b2, &b3);

    int maxWin = 0;
    int minWin = 0;

    if (a1 < b2) maxWin = maxWin + a1; else maxWin = maxWin + b2; 
    if (a2 < b3) maxWin = maxWin + a2; else maxWin = maxWin + b3; 
    if (a3 < b1) maxWin = maxWin + a3; else maxWin = maxWin + b1;  


    if (a1 > b1 + b3) minWin = minWin + (a1 - b1 - b3);  
    if (a2 > b2 + b1) minWin = minWin + (a2 - b2 - b1);   
    if (a3 > b3 + b2) minWin = minWin + (a3 - b3 - b2);   

    printf("%d %d\n", minWin, maxWin);  
    return 0;
}