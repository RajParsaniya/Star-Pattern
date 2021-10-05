#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, k;
    printf("Enter A Row : ");
    scanf("%d",&n);

    printf("\n");

    for (i = 0; i < n; i++)
    {        
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= n-i; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    i=0, j=0, k=0;

    for (i = 1; i < n; i++)
    {        
        for (j = 1; j < n-i; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= i+1; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    getch();
}
