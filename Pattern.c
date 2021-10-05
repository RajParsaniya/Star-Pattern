#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, k, l;
    printf("Enter A Column : ");
    scanf("%d",&n);

    printf("\n");

    for (i = 1; i <= n; i++)
    {        
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    for (k = n-1; k >= 1; k--)
    {        
        for (l = 1; l <= k; l++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    getch();
}
