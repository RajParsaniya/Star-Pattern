#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j;
    printf("Enter A Row : ");
    scanf("%d",&n);

    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j==1 || i==j || i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();
}
