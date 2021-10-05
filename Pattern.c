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
        for (j = 1; j <= n; j++)
        {
            if (i==1 || i==n || j==1 || j==n)
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
