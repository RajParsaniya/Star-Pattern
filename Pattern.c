#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, k;
    printf("Enter A Row : ");
    scanf("%d",&n);

    printf("\n");

    for (i = 1; i <= n; i++)
    {    
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        
        for (k = 1; k <= n; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    getch();
}
