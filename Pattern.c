#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, k, m=1;
    printf("Enter A Row : ");
    scanf("%d",&n);

    printf("\n");

    for (i = n; i >= 1; i--)
    {        
        for (j = 1; j < m; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= 2*i-1; k++)
        {
            if (k==1 || k==2*i-1 || i==n)
            {
                printf("%d",k);
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
        m++;
    }

    getch();
}
