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
        for (k = m; k >= 1; k--)
        {
            printf("%d",k);
        }
        
        printf("\n");
        m++;
    }

    getch();
}
