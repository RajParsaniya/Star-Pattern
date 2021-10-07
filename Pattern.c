#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, k, m;
    printf("Enter A Row : ");
    scanf("%d",&n);
    m=n;

    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m-1; j++)
        {
            printf(" ");
        }
        
        for (k = 1; k <= 2*i-1; k++)
        {
            if (k==1 || k==2*i-1 || i==n)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        m--;
    }

    getch();
}
