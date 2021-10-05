#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, k;
    printf("Enter A Row : ");
    scanf("%d",&n);

    printf("\n");

    for (i = n; i >= 1; i--)
    {    
        for (j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        
        for (k = 1; k <= n; k++)
        {
            if (i==1 || i==n || k==1 || k==n)
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
