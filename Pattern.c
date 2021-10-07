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
        for (j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= m; k++)
        {
            printf("%d",m);
        }
        
        printf("\n");
        m++;
    }

    getch();
}
