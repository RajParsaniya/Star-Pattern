#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, k;

    printf("Enter A Row : ");
    scanf("%d",&n);

    printf("\n");

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        
        for(k=1; k<=2*i-1; k++)
        {
            if(k==1 || k==(2*i-1))
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

    i=0, j=0, k=0;

    for(i=n-1; i>=1; i--)
    {
        for(j=n; j>=i; j--)
        {
            printf(" ");
        }
        
        for(k=1; k<=2*i-1; k++)
        {
            if(k==1 || k==2*i-1)
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
