#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j;
    printf("Enter A Column : ");
    scanf("%d",&n);

    int Space = n-1;
    int Star = 1;

    for (i = 1; i < n*2; i++)
    {
        for (j = 1; j <= Space; j++)
        {
            printf(" ");
        }
        
        for (j = 1; j <= Star; j++)
        {
            printf("*");
        }

        printf("\n");

        if (i < n)
        {
            Star++;
            Space--;
        }
        else
        {
            Star--;
            Space++;
        }
    }

    getch();
}
